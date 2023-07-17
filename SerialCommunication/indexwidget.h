#ifndef INDEXWIDGET_H
#define INDEXWIDGET_H

#include <QWidget>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class IndexWidget;
}

class IndexWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IndexWidget(QWidget *parent = nullptr);
    ~IndexWidget();
    void SerialPortInit();

private:
    Ui::IndexWidget *ui;

     QSerialPort *serial;

public slots:

    void DataReceived();
signals:
    void WriteAndSendData(const QByteArray& data);
private slots:
    void on_btn_ManualSending_clicked();
    void        LED(bool changeColor);

    void on_openButton_clicked();
    void on_RfreshButton_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // INDEXWIDGET_H
