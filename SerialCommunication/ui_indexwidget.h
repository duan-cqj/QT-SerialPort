/********************************************************************************
** Form generated from reading UI file 'indexwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEXWIDGET_H
#define UI_INDEXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IndexWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *RecWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LED;
    QLabel *label;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *RfreshButton;
    QPushButton *openButton;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit_Rec;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QWidget *SendWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_12;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_7;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btn_ManualSending;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit_Send;
    QWidget *widget_18;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_2;
    QWidget *MessageWidget;
    QHBoxLayout *horizontalLayout_14;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QWidget *IndexWidget)
    {
        if (IndexWidget->objectName().isEmpty())
            IndexWidget->setObjectName(QString::fromUtf8("IndexWidget"));
        IndexWidget->resize(800, 638);
        IndexWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(IndexWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RecWidget = new QWidget(IndexWidget);
        RecWidget->setObjectName(QString::fromUtf8("RecWidget"));
        RecWidget->setMaximumSize(QSize(16777215, 400));
        horizontalLayout = new QHBoxLayout(RecWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(RecWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        LED = new QLabel(widget_3);
        LED->setObjectName(QString::fromUtf8("LED"));
        LED->setMaximumSize(QSize(24, 24));
        LED->setBaseSize(QSize(24, 24));
        LED->setStyleSheet(QString::fromUtf8("background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5,\n"
"radius:0.5, fx:0.5,fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:\n"
"1 rgba(255, 255, 255, 255));\n"
"border-radius: 12px;"));
        LED->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LED);

        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(60, 16777215));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);


        verticalLayout_2->addWidget(widget_3);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_2);

        comboBox = new QComboBox(widget_6);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_6->addWidget(comboBox);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(widget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_3);

        comboBox_2 = new QComboBox(widget_7);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_7->addWidget(comboBox_2);


        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(widget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_4);

        comboBox_3 = new QComboBox(widget_8);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_8->addWidget(comboBox_3);


        verticalLayout_2->addWidget(widget_8);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(widget_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        comboBox_4 = new QComboBox(widget_9);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_9->addWidget(comboBox_4);


        verticalLayout_2->addWidget(widget_9);

        widget_10 = new QWidget(widget_4);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_6 = new QLabel(widget_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_6);

        comboBox_5 = new QComboBox(widget_10);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_10->addWidget(comboBox_5);


        verticalLayout_2->addWidget(widget_10);

        widget_11 = new QWidget(widget_4);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_11 = new QHBoxLayout(widget_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        RfreshButton = new QPushButton(widget_11);
        RfreshButton->setObjectName(QString::fromUtf8("RfreshButton"));
        RfreshButton->setMaximumSize(QSize(164, 16777215));

        horizontalLayout_11->addWidget(RfreshButton);

        openButton = new QPushButton(widget_11);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout_11->addWidget(openButton);


        verticalLayout_2->addWidget(widget_11);


        horizontalLayout->addWidget(widget_4);

        widget_5 = new QWidget(RecWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textEdit_Rec = new QTextEdit(widget_5);
        textEdit_Rec->setObjectName(QString::fromUtf8("textEdit_Rec"));
        sizePolicy.setHeightForWidth(textEdit_Rec->sizePolicy().hasHeightForWidth());
        textEdit_Rec->setSizePolicy(sizePolicy);
        textEdit_Rec->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(textEdit_Rec);

        widget_17 = new QWidget(widget_5);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setMaximumSize(QSize(90, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget_17);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(widget_17);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout_3->addWidget(widget_17);


        horizontalLayout->addWidget(widget_5);


        verticalLayout->addWidget(RecWidget);

        SendWidget = new QWidget(IndexWidget);
        SendWidget->setObjectName(QString::fromUtf8("SendWidget"));
        sizePolicy.setHeightForWidth(SendWidget->sizePolicy().hasHeightForWidth());
        SendWidget->setSizePolicy(sizePolicy);
        SendWidget->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_2 = new QHBoxLayout(SendWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SendWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_12 = new QWidget(widget);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMaximumSize(QSize(16777215, 160));
        horizontalLayout_12 = new QHBoxLayout(widget_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        widget_19 = new QWidget(widget_12);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        horizontalLayout_18 = new QHBoxLayout(widget_19);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_19);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_7->setTextFormat(Qt::AutoText);
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_7);


        horizontalLayout_12->addWidget(widget_19);


        verticalLayout_3->addWidget(widget_12);

        widget_13 = new QWidget(widget);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setMaximumSize(QSize(16777215, 40));
        widget_13->setSizeIncrement(QSize(0, 0));
        horizontalLayout_13 = new QHBoxLayout(widget_13);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        btn_ManualSending = new QPushButton(widget_13);
        btn_ManualSending->setObjectName(QString::fromUtf8("btn_ManualSending"));
        btn_ManualSending->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_13->addWidget(btn_ManualSending);


        verticalLayout_3->addWidget(widget_13);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(SendWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textEdit_Send = new QTextEdit(widget_2);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));
        sizePolicy.setHeightForWidth(textEdit_Send->sizePolicy().hasHeightForWidth());
        textEdit_Send->setSizePolicy(sizePolicy);
        textEdit_Send->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(textEdit_Send);

        widget_18 = new QWidget(widget_2);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setMaximumSize(QSize(90, 16777215));
        verticalLayout_5 = new QVBoxLayout(widget_18);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_2 = new QPushButton(widget_18);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);


        horizontalLayout_4->addWidget(widget_18);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(SendWidget);

        MessageWidget = new QWidget(IndexWidget);
        MessageWidget->setObjectName(QString::fromUtf8("MessageWidget"));
        MessageWidget->setMaximumSize(QSize(16777215, 40));
        MessageWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_14 = new QHBoxLayout(MessageWidget);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        widget_14 = new QWidget(MessageWidget);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_15 = new QHBoxLayout(widget_14);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_8 = new QLabel(widget_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_15->addWidget(label_8);

        label_9 = new QLabel(widget_14);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_15->addWidget(label_9);


        horizontalLayout_14->addWidget(widget_14);

        widget_15 = new QWidget(MessageWidget);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        horizontalLayout_16 = new QHBoxLayout(widget_15);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(widget_15);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_16->addWidget(label_10);

        label_11 = new QLabel(widget_15);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(50, 16777215));
        label_11->setFont(font);
        label_11->setScaledContents(true);

        horizontalLayout_16->addWidget(label_11);


        horizontalLayout_14->addWidget(widget_15);

        widget_16 = new QWidget(MessageWidget);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        horizontalLayout_17 = new QHBoxLayout(widget_16);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_12 = new QLabel(widget_16);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_17->addWidget(label_12);

        label_13 = new QLabel(widget_16);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_17->addWidget(label_13);


        horizontalLayout_14->addWidget(widget_16);


        verticalLayout->addWidget(MessageWidget);


        retranslateUi(IndexWidget);

        QMetaObject::connectSlotsByName(IndexWidget);
    } // setupUi

    void retranslateUi(QWidget *IndexWidget)
    {
        IndexWidget->setWindowTitle(QApplication::translate("IndexWidget", "Form", nullptr));
        LED->setText(QString());
        label->setText(QApplication::translate("IndexWidget", "\346\216\245\346\224\266\345\214\272", nullptr));
        label_2->setText(QApplication::translate("IndexWidget", "\344\270\262\345\217\243", nullptr));
        label_3->setText(QApplication::translate("IndexWidget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("IndexWidget", "115200", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("IndexWidget", "57600", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("IndexWidget", "38400", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("IndexWidget", "19200", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("IndexWidget", "9600", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("IndexWidget", "4800", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("IndexWidget", "2400", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("IndexWidget", "1200", nullptr));

        label_4->setText(QApplication::translate("IndexWidget", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("IndexWidget", "\346\227\240", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("IndexWidget", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("IndexWidget", "\345\201\266\346\240\241\351\252\214", nullptr));

        label_5->setText(QApplication::translate("IndexWidget", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("IndexWidget", "5", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("IndexWidget", "6", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("IndexWidget", "7", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("IndexWidget", "8", nullptr));

        label_6->setText(QApplication::translate("IndexWidget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_5->setItemText(0, QApplication::translate("IndexWidget", "1", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("IndexWidget", "1.5", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("IndexWidget", "2", nullptr));

        RfreshButton->setText(QApplication::translate("IndexWidget", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        openButton->setText(QApplication::translate("IndexWidget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        textEdit_Rec->setHtml(QApplication::translate("IndexWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("IndexWidget", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        label_7->setText(QApplication::translate("IndexWidget", "\345\217\221\351\200\201\345\214\272", nullptr));
        btn_ManualSending->setText(QApplication::translate("IndexWidget", "\346\211\213\345\212\250\345\217\221\351\200\201", nullptr));
        pushButton_2->setText(QApplication::translate("IndexWidget", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        label_8->setText(QApplication::translate("IndexWidget", "Status\357\274\232COM Port closed", nullptr));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("IndexWidget", "RX:", nullptr));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("IndexWidget", "TX:", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IndexWidget: public Ui_IndexWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEXWIDGET_H
