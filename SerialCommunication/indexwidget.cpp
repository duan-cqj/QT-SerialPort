#include "indexwidget.h"
#include "ui_indexwidget.h"
#include <QDebug>
#include <QMessageBox>
#include <QIcon>

IndexWidget::IndexWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IndexWidget)
{
    ui->setupUi(this);
    QIcon icon(":/image/x.jpg"); // 替换成你的图标路径
    setWindowIcon(icon);
    SerialPortInit();
    connect(serial,&QSerialPort::readyRead,this,&IndexWidget::DataReceived);
    setWindowTitle("串口调试工具");
   // QString styleSheet = QString("background-image: url(:/image/x.jpg); background-position: center; background-repeat: no-repeat; background-size: cover;");
   // ui->widget_19->setStyleSheet(styleSheet);
}

IndexWidget::~IndexWidget()
{
    delete ui;
}


void IndexWidget::on_btn_ManualSending_clicked()
{
    serial->write(ui->textEdit_Send->toPlainText().toUtf8());      // 串口发送数据
}

void IndexWidget::SerialPortInit()
{
    serial = new QSerialPort;                       //申请内存,并设置父对象
    ui->openButton->setStyleSheet("color: green;");
    // 获取计算机中有效的端口号，然后将端口号的名称给端口选择控件
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        serial->setPort(info);                      // 在对象中设置串口
        if(serial->open(QIODevice::ReadWrite))      // 以读写方式打开串口
        {
            ui->comboBox->addItem(info.portName());  // 添加计算机中的端口
            serial->close();                        // 关闭
        }
        else
        {
            qDebug() << "串口打开失败，请重试";
        }
    }   

}


void  IndexWidget::LED(bool changeColor)
{
    if(changeColor == false)
    {
        // 显示绿色
        ui->LED->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 229, 0, 255), stop:1 rgba(255, 255, 255, 255));border-radius:12px;");
    }
    else
    {
        // 显示红色
        ui->LED->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));border-radius:12px;");
    }
}


void IndexWidget::on_openButton_clicked()
{
    if(serial->isOpen())                                        // 如果串口打开了，先给他关闭
    {
        serial->clear();
        serial->close();
        // 关闭状态，按钮显示“打开串口”
        ui->openButton->setText("打开串口");
        // 关闭状态，允许用户操作
        ui->comboBox->setDisabled(false);
        ui->comboBox_2->setDisabled(false);
        ui->comboBox_3->setDisabled(false);
        ui->comboBox_4->setDisabled(false);
        ui->comboBox_5->setDisabled(false);
        // 禁止操作“发送字符操作”

        // 关闭状态，颜色为绿色
        ui->openButton->setStyleSheet("color: green;");
        // 关闭，显示灯为红色
        LED(true);
        // 清空数据
        ui->textEdit_Rec->clear();
        ui->textEdit_Send->clear();
        ui->label_8->setText("Status: Com Port Closed");
    }
    else                                                        // 如果串口关闭了，先给他打开
    {
        //当前选择的串口名字
        serial->setPortName(ui->comboBox->currentText());

        //选择波特率
        QString  baudrate = ui->comboBox_2->currentText();

        int baudrateValue = baudrate.toInt(); // 将字符串转换为整数

        switch (baudrateValue)
        {

        case 1200:
            serial->setBaudRate(QSerialPort::Baud1200);
            break;
        case 2400:
            serial->setBaudRate(QSerialPort::Baud2400);
            break;
        case 4800:
            serial->setBaudRate(QSerialPort::Baud4800);
            break;
        case 9600:
            serial->setBaudRate(QSerialPort::Baud9600);
            break;
        case 19200:
            serial->setBaudRate(QSerialPort::Baud19200);
            break;
        case 38400:
            serial->setBaudRate(QSerialPort::Baud38400);
            break;
        case 57600:
            serial->setBaudRate(QSerialPort::Baud57600);
            break;
        case 115200:
            serial->setBaudRate(QSerialPort::Baud115200);
            break;
        default:
                // 处理无效的波特率
                break;
        }

        //设置数据位
        QString  databits = ui->comboBox_4->currentText();

        int databitsValue = databits.toInt(); // 将字符串转换为整数

        switch (databitsValue)
        {

        case 5:
            serial->setDataBits(QSerialPort::Data5);
            break;
        case 6:
            serial->setDataBits(QSerialPort::Data6);
            break;
        case 7:
            serial->setDataBits(QSerialPort::Data7);
            break;
        case 8:
            serial->setDataBits(QSerialPort::Data8);
            break;
        default:
                break;
        }

        //设置停止位
        QString stopbits = ui->comboBox_5->currentText();

        float stopbitsValue = stopbits.toFloat(); // 将字符串转换为浮点数

        if (stopbitsValue == 1.0)
        {
            serial->setStopBits(QSerialPort::OneStop);
        }
        else if (stopbitsValue == 1.5)
        {
            serial->setStopBits(QSerialPort::OneAndHalfStop);
        }
        else if (stopbitsValue == 2.0)
        {
            serial->setStopBits(QSerialPort::TwoStop);
        }
        else
        {
             // 处理无效的停止位值
        }

        //设置奇偶校验
        QString  parity = ui->comboBox_3->currentText();
        if(parity=="无")
        {
            serial->setParity(QSerialPort::NoParity);
        }
        else if(parity=="奇校验")
        {
            serial->setParity(QSerialPort::OddParity);
        }
        else if(parity=="偶校验")
        {
            serial->setParity(QSerialPort::EvenParity);
        }


        //用ReadWrite 的模式尝试打开串口，无法收发数据时，发出警告
        if(!serial->open(QIODevice::ReadWrite))
        {
            QMessageBox::warning(this,tr("提示"),tr("串口打开失败!"),QMessageBox::Ok);
            return;
         }
        // 打开状态，按钮显示“关闭串口”
        ui->openButton->setText("关闭串口");
        // 打开状态，禁止用户操作
        ui->comboBox->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
        ui->comboBox_3->setDisabled(true);
        ui->comboBox_4->setDisabled(true);
        ui->comboBox_5->setDisabled(true);
        // 允许操作“发送字符操作”

        // 打开状态，颜色为红色
        ui->openButton->setStyleSheet("color: red;");
        // 打开，显示灯为绿色
        LED(false);
       ui->label_8->setText("Status: Com Port Open");
    }

}

void IndexWidget::on_RfreshButton_clicked()
{
           QStringList portNameList;                                        // 存储所有串口名

           ui->comboBox->clear();                                        //关闭串口号

           foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) //添加新串口
           {
               portNameList.append(info.portName());
           }

           ui->comboBox->addItems(portNameList);
           ui->comboBox->setCurrentIndex(1);                             // 当前串口号为COM1
           serial->setPortName(ui->comboBox->currentText());             //设置串口号

}

void IndexWidget::DataReceived()
{
    char BUF[512] = {0};                                       // 存储转换类型后的数据
    QByteArray data = serial->readAll();                      // 读取数据

    if(!data.isEmpty())                                 // 接收到数据
    {
        QString str = ui->textEdit_Rec->toPlainText();  // 返回纯文本
        str += tr(data);                                // 数据是一行一行传送的，要保存所有数据
        ui->textEdit_Rec->clear();                      // 清空之前的数据
        ui->textEdit_Rec->append(str);                  // 将数据放入控件中
       // qDebug() << "str info: " << ui->textEdit_Rec->toPlainText();

         // 清除之前的数据，防止追加，因为每次获取的数据不一样
        int index = str.indexOf("\r\n");                // 找到，返回索引值，找不到，返回-1
        if(index != -1)
        {
            snprintf(BUF,500,"%s", str.left(index + 2).toUtf8().data()); // QString转为char * 类型
           // qDebug() << "BUF info: " << BUF;
            str.remove(0,index + 2);

            // 处理获取到的数据，将其放入对应的控件中
            // ....
        }
    }

}

void IndexWidget::on_pushButton_clicked()
{
    ui->textEdit_Rec->setText("");
}

void IndexWidget::on_pushButton_2_clicked()
{
    ui->textEdit_Send->setText("");
}

