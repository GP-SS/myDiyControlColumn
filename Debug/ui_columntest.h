/********************************************************************************
** Form generated from reading UI file 'columntest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNTEST_H
#define UI_COLUMNTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mycolumn.h"

QT_BEGIN_NAMESPACE

class Ui_ColumnTest
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    MyColumn *myColumn_5;
    QLineEdit *edt_num5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    MyColumn *myColumn_3;
    QLineEdit *edt_num3;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_9;
    MyColumn *myColumn_9;
    QLineEdit *edt_num9;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_8;
    MyColumn *myColumn_8;
    QLineEdit *edt_num8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    MyColumn *myColumn_2;
    QLineEdit *edt_num2;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_7;
    MyColumn *myColumn_7;
    QLineEdit *lineEdit_7;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    MyColumn *myColumn_18;
    QLineEdit *edt_num18;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_14;
    MyColumn *myColumn_17;
    QLineEdit *edt_num17;
    QGroupBox *groupBox_16;
    QVBoxLayout *verticalLayout_16;
    MyColumn *myColumn_11;
    QLineEdit *edt_num11;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    MyColumn *myColumn_6;
    QLineEdit *edt_num6;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_12;
    MyColumn *myColumn_14;
    QLineEdit *edt_num14;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_15;
    MyColumn *myColumn_10;
    QLineEdit *edt_num10;
    QGroupBox *groupBox_18;
    QVBoxLayout *verticalLayout_18;
    MyColumn *myColumn_13;
    QLineEdit *edt_num13;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_11;
    MyColumn *myColumn_15;
    QLineEdit *edt_num15;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_13;
    MyColumn *myColumn_12;
    QLineEdit *edt_num12;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    MyColumn *myColumn_4;
    QLineEdit *edt_num4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    MyColumn *myColumn_1;
    QLineEdit *edt_num1;
    QGroupBox *groupBox_17;
    QVBoxLayout *verticalLayout_17;
    MyColumn *myColumn_16;
    QLineEdit *edt_num16;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_20;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_19;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edt_ipaddress;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edt_port;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_connect;
    QPushButton *btn_disconnect;
    QPushButton *btn_clear;

    void setupUi(QWidget *ColumnTest)
    {
        if (ColumnTest->objectName().isEmpty())
            ColumnTest->setObjectName(QString::fromUtf8("ColumnTest"));
        ColumnTest->resize(1319, 723);
        gridLayout_2 = new QGridLayout(ColumnTest);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        widget_5 = new QWidget(ColumnTest);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_5 = new QGroupBox(widget_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        myColumn_5 = new MyColumn(groupBox_5);
        myColumn_5->setObjectName(QString::fromUtf8("myColumn_5"));

        verticalLayout_5->addWidget(myColumn_5);

        edt_num5 = new QLineEdit(groupBox_5);
        edt_num5->setObjectName(QString::fromUtf8("edt_num5"));
        edt_num5->setReadOnly(true);

        verticalLayout_5->addWidget(edt_num5);


        gridLayout_4->addWidget(groupBox_5, 0, 4, 1, 1);

        groupBox_3 = new QGroupBox(widget_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        myColumn_3 = new MyColumn(groupBox_3);
        myColumn_3->setObjectName(QString::fromUtf8("myColumn_3"));

        verticalLayout_3->addWidget(myColumn_3);

        edt_num3 = new QLineEdit(groupBox_3);
        edt_num3->setObjectName(QString::fromUtf8("edt_num3"));
        edt_num3->setReadOnly(true);

        verticalLayout_3->addWidget(edt_num3);


        gridLayout_4->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_9 = new QGroupBox(widget_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setAlignment(Qt::AlignCenter);
        groupBox_9->setFlat(false);
        groupBox_9->setCheckable(false);
        verticalLayout_9 = new QVBoxLayout(groupBox_9);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        myColumn_9 = new MyColumn(groupBox_9);
        myColumn_9->setObjectName(QString::fromUtf8("myColumn_9"));

        verticalLayout_9->addWidget(myColumn_9);

        edt_num9 = new QLineEdit(groupBox_9);
        edt_num9->setObjectName(QString::fromUtf8("edt_num9"));
        edt_num9->setReadOnly(true);

        verticalLayout_9->addWidget(edt_num9);


        gridLayout_4->addWidget(groupBox_9, 0, 8, 1, 1);

        groupBox_8 = new QGroupBox(widget_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setAlignment(Qt::AlignCenter);
        groupBox_8->setFlat(false);
        groupBox_8->setCheckable(false);
        verticalLayout_8 = new QVBoxLayout(groupBox_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        myColumn_8 = new MyColumn(groupBox_8);
        myColumn_8->setObjectName(QString::fromUtf8("myColumn_8"));

        verticalLayout_8->addWidget(myColumn_8);

        edt_num8 = new QLineEdit(groupBox_8);
        edt_num8->setObjectName(QString::fromUtf8("edt_num8"));
        edt_num8->setReadOnly(true);

        verticalLayout_8->addWidget(edt_num8);


        gridLayout_4->addWidget(groupBox_8, 0, 7, 1, 1);

        groupBox_2 = new QGroupBox(widget_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        myColumn_2 = new MyColumn(groupBox_2);
        myColumn_2->setObjectName(QString::fromUtf8("myColumn_2"));

        verticalLayout_2->addWidget(myColumn_2);

        edt_num2 = new QLineEdit(groupBox_2);
        edt_num2->setObjectName(QString::fromUtf8("edt_num2"));
        edt_num2->setReadOnly(true);

        verticalLayout_2->addWidget(edt_num2);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(widget_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        groupBox_7->setFlat(false);
        groupBox_7->setCheckable(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        myColumn_7 = new MyColumn(groupBox_7);
        myColumn_7->setObjectName(QString::fromUtf8("myColumn_7"));

        verticalLayout_7->addWidget(myColumn_7);

        lineEdit_7 = new QLineEdit(groupBox_7);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_7);


        gridLayout_4->addWidget(groupBox_7, 0, 6, 1, 1);

        groupBox_10 = new QGroupBox(widget_5);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setAlignment(Qt::AlignCenter);
        groupBox_10->setFlat(false);
        groupBox_10->setCheckable(false);
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        myColumn_18 = new MyColumn(groupBox_10);
        myColumn_18->setObjectName(QString::fromUtf8("myColumn_18"));

        verticalLayout_10->addWidget(myColumn_18);

        edt_num18 = new QLineEdit(groupBox_10);
        edt_num18->setObjectName(QString::fromUtf8("edt_num18"));
        edt_num18->setReadOnly(true);

        verticalLayout_10->addWidget(edt_num18);


        gridLayout_4->addWidget(groupBox_10, 1, 8, 1, 1);

        groupBox_14 = new QGroupBox(widget_5);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setAlignment(Qt::AlignCenter);
        groupBox_14->setFlat(false);
        groupBox_14->setCheckable(false);
        verticalLayout_14 = new QVBoxLayout(groupBox_14);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        myColumn_17 = new MyColumn(groupBox_14);
        myColumn_17->setObjectName(QString::fromUtf8("myColumn_17"));

        verticalLayout_14->addWidget(myColumn_17);

        edt_num17 = new QLineEdit(groupBox_14);
        edt_num17->setObjectName(QString::fromUtf8("edt_num17"));
        edt_num17->setReadOnly(true);

        verticalLayout_14->addWidget(edt_num17);


        gridLayout_4->addWidget(groupBox_14, 1, 7, 1, 1);

        groupBox_16 = new QGroupBox(widget_5);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setAlignment(Qt::AlignCenter);
        groupBox_16->setFlat(false);
        groupBox_16->setCheckable(false);
        verticalLayout_16 = new QVBoxLayout(groupBox_16);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        myColumn_11 = new MyColumn(groupBox_16);
        myColumn_11->setObjectName(QString::fromUtf8("myColumn_11"));

        verticalLayout_16->addWidget(myColumn_11);

        edt_num11 = new QLineEdit(groupBox_16);
        edt_num11->setObjectName(QString::fromUtf8("edt_num11"));
        edt_num11->setReadOnly(true);

        verticalLayout_16->addWidget(edt_num11);


        gridLayout_4->addWidget(groupBox_16, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(widget_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(false);
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        myColumn_6 = new MyColumn(groupBox_6);
        myColumn_6->setObjectName(QString::fromUtf8("myColumn_6"));

        verticalLayout_6->addWidget(myColumn_6);

        edt_num6 = new QLineEdit(groupBox_6);
        edt_num6->setObjectName(QString::fromUtf8("edt_num6"));
        edt_num6->setReadOnly(true);

        verticalLayout_6->addWidget(edt_num6);


        gridLayout_4->addWidget(groupBox_6, 0, 5, 1, 1);

        groupBox_12 = new QGroupBox(widget_5);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setAlignment(Qt::AlignCenter);
        groupBox_12->setFlat(false);
        groupBox_12->setCheckable(false);
        verticalLayout_12 = new QVBoxLayout(groupBox_12);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        myColumn_14 = new MyColumn(groupBox_12);
        myColumn_14->setObjectName(QString::fromUtf8("myColumn_14"));

        verticalLayout_12->addWidget(myColumn_14);

        edt_num14 = new QLineEdit(groupBox_12);
        edt_num14->setObjectName(QString::fromUtf8("edt_num14"));
        edt_num14->setReadOnly(true);

        verticalLayout_12->addWidget(edt_num14);


        gridLayout_4->addWidget(groupBox_12, 1, 4, 1, 1);

        groupBox_15 = new QGroupBox(widget_5);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setAlignment(Qt::AlignCenter);
        groupBox_15->setFlat(false);
        groupBox_15->setCheckable(false);
        verticalLayout_15 = new QVBoxLayout(groupBox_15);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        myColumn_10 = new MyColumn(groupBox_15);
        myColumn_10->setObjectName(QString::fromUtf8("myColumn_10"));

        verticalLayout_15->addWidget(myColumn_10);

        edt_num10 = new QLineEdit(groupBox_15);
        edt_num10->setObjectName(QString::fromUtf8("edt_num10"));
        edt_num10->setReadOnly(true);

        verticalLayout_15->addWidget(edt_num10);


        gridLayout_4->addWidget(groupBox_15, 1, 0, 1, 1);

        groupBox_18 = new QGroupBox(widget_5);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setAlignment(Qt::AlignCenter);
        groupBox_18->setFlat(false);
        groupBox_18->setCheckable(false);
        verticalLayout_18 = new QVBoxLayout(groupBox_18);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        myColumn_13 = new MyColumn(groupBox_18);
        myColumn_13->setObjectName(QString::fromUtf8("myColumn_13"));

        verticalLayout_18->addWidget(myColumn_13);

        edt_num13 = new QLineEdit(groupBox_18);
        edt_num13->setObjectName(QString::fromUtf8("edt_num13"));
        edt_num13->setReadOnly(true);

        verticalLayout_18->addWidget(edt_num13);


        gridLayout_4->addWidget(groupBox_18, 1, 3, 1, 1);

        groupBox_11 = new QGroupBox(widget_5);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setAlignment(Qt::AlignCenter);
        groupBox_11->setFlat(false);
        groupBox_11->setCheckable(false);
        verticalLayout_11 = new QVBoxLayout(groupBox_11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        myColumn_15 = new MyColumn(groupBox_11);
        myColumn_15->setObjectName(QString::fromUtf8("myColumn_15"));

        verticalLayout_11->addWidget(myColumn_15);

        edt_num15 = new QLineEdit(groupBox_11);
        edt_num15->setObjectName(QString::fromUtf8("edt_num15"));
        edt_num15->setReadOnly(true);

        verticalLayout_11->addWidget(edt_num15);


        gridLayout_4->addWidget(groupBox_11, 1, 5, 1, 1);

        groupBox_13 = new QGroupBox(widget_5);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setAlignment(Qt::AlignCenter);
        groupBox_13->setFlat(false);
        groupBox_13->setCheckable(false);
        verticalLayout_13 = new QVBoxLayout(groupBox_13);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        myColumn_12 = new MyColumn(groupBox_13);
        myColumn_12->setObjectName(QString::fromUtf8("myColumn_12"));

        verticalLayout_13->addWidget(myColumn_12);

        edt_num12 = new QLineEdit(groupBox_13);
        edt_num12->setObjectName(QString::fromUtf8("edt_num12"));
        edt_num12->setReadOnly(true);

        verticalLayout_13->addWidget(edt_num12);


        gridLayout_4->addWidget(groupBox_13, 1, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        myColumn_4 = new MyColumn(groupBox_4);
        myColumn_4->setObjectName(QString::fromUtf8("myColumn_4"));

        verticalLayout_4->addWidget(myColumn_4);

        edt_num4 = new QLineEdit(groupBox_4);
        edt_num4->setObjectName(QString::fromUtf8("edt_num4"));
        edt_num4->setReadOnly(true);

        verticalLayout_4->addWidget(edt_num4);


        gridLayout_4->addWidget(groupBox_4, 0, 3, 1, 1);

        groupBox = new QGroupBox(widget_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        myColumn_1 = new MyColumn(groupBox);
        myColumn_1->setObjectName(QString::fromUtf8("myColumn_1"));

        verticalLayout->addWidget(myColumn_1);

        edt_num1 = new QLineEdit(groupBox);
        edt_num1->setObjectName(QString::fromUtf8("edt_num1"));
        edt_num1->setReadOnly(true);

        verticalLayout->addWidget(edt_num1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_17 = new QGroupBox(widget_5);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setAlignment(Qt::AlignCenter);
        groupBox_17->setFlat(false);
        groupBox_17->setCheckable(false);
        verticalLayout_17 = new QVBoxLayout(groupBox_17);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        myColumn_16 = new MyColumn(groupBox_17);
        myColumn_16->setObjectName(QString::fromUtf8("myColumn_16"));

        verticalLayout_17->addWidget(myColumn_16);

        edt_num16 = new QLineEdit(groupBox_17);
        edt_num16->setObjectName(QString::fromUtf8("edt_num16"));
        edt_num16->setReadOnly(true);

        verticalLayout_17->addWidget(edt_num16);


        gridLayout_4->addWidget(groupBox_17, 1, 6, 1, 1);


        verticalLayout_19->addWidget(widget_5);

        widget_4 = new QWidget(ColumnTest);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_20 = new QGroupBox(widget_4);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        gridLayout = new QGridLayout(groupBox_20);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(groupBox_20);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_20);

        groupBox_19 = new QGroupBox(widget_4);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_19);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget = new QWidget(groupBox_19);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edt_ipaddress = new QLineEdit(widget);
        edt_ipaddress->setObjectName(QString::fromUtf8("edt_ipaddress"));

        horizontalLayout->addWidget(edt_ipaddress);


        horizontalLayout_4->addWidget(widget);

        widget_2 = new QWidget(groupBox_19);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edt_port = new QLineEdit(widget_2);
        edt_port->setObjectName(QString::fromUtf8("edt_port"));

        horizontalLayout_2->addWidget(edt_port);


        horizontalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(groupBox_19);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_connect = new QPushButton(widget_3);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));

        horizontalLayout_3->addWidget(btn_connect);

        btn_disconnect = new QPushButton(widget_3);
        btn_disconnect->setObjectName(QString::fromUtf8("btn_disconnect"));

        horizontalLayout_3->addWidget(btn_disconnect);

        btn_clear = new QPushButton(widget_3);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        horizontalLayout_3->addWidget(btn_clear);


        horizontalLayout_4->addWidget(widget_3);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 2);

        horizontalLayout_5->addWidget(groupBox_19);

        horizontalLayout_5->setStretch(0, 4);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout_19->addWidget(widget_4);

        verticalLayout_19->setStretch(0, 6);
        verticalLayout_19->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout_19, 0, 0, 1, 1);


        retranslateUi(ColumnTest);

        QMetaObject::connectSlotsByName(ColumnTest);
    } // setupUi

    void retranslateUi(QWidget *ColumnTest)
    {
        ColumnTest->setWindowTitle(QApplication::translate("ColumnTest", "ColumnTest", nullptr));
        groupBox_5->setTitle(QApplication::translate("ColumnTest", "5SB", nullptr));
        groupBox_3->setTitle(QApplication::translate("ColumnTest", "1SB", nullptr));
        groupBox_9->setTitle(QApplication::translate("ColumnTest", "1ZB", nullptr));
        groupBox_8->setTitle(QApplication::translate("ColumnTest", "11SB", nullptr));
        groupBox_2->setTitle(QApplication::translate("ColumnTest", "3AB", nullptr));
        groupBox_7->setTitle(QApplication::translate("ColumnTest", "9SB", nullptr));
        groupBox_10->setTitle(QApplication::translate("ColumnTest", "2ZB", nullptr));
        groupBox_14->setTitle(QApplication::translate("ColumnTest", "12SB", nullptr));
        groupBox_16->setTitle(QApplication::translate("ColumnTest", "4AB", nullptr));
        groupBox_6->setTitle(QApplication::translate("ColumnTest", "7SB", nullptr));
        groupBox_12->setTitle(QApplication::translate("ColumnTest", "6SB", nullptr));
        groupBox_15->setTitle(QApplication::translate("ColumnTest", "2AB", nullptr));
        groupBox_18->setTitle(QApplication::translate("ColumnTest", "4SB", nullptr));
        groupBox_11->setTitle(QApplication::translate("ColumnTest", "8SB", nullptr));
        groupBox_13->setTitle(QApplication::translate("ColumnTest", "2SB", nullptr));
        groupBox_4->setTitle(QApplication::translate("ColumnTest", "3SB", nullptr));
        groupBox->setTitle(QApplication::translate("ColumnTest", "1AB", nullptr));
        groupBox_17->setTitle(QApplication::translate("ColumnTest", "10SB", nullptr));
        groupBox_20->setTitle(QApplication::translate("ColumnTest", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        groupBox_19->setTitle(QApplication::translate("ColumnTest", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("ColumnTest", "\346\234\215\345\212\241\347\253\257IP\345\234\260\345\235\200\357\274\232", nullptr));
        edt_ipaddress->setText(QString());
        label_2->setText(QApplication::translate("ColumnTest", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        edt_port->setText(QString());
        btn_connect->setText(QApplication::translate("ColumnTest", "\345\274\200\345\247\213\350\277\236\346\216\245", nullptr));
        btn_disconnect->setText(QApplication::translate("ColumnTest", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        btn_clear->setText(QApplication::translate("ColumnTest", "\346\270\205\351\231\244\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnTest: public Ui_ColumnTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNTEST_H
