/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myweatherwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_8;
    QComboBox *comboBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    MyWeatherWidget *widgetToday;
    MyWeatherWidget *widgetFuture1;
    MyWeatherWidget *widgetFuture2;
    MyWeatherWidget *widgetFuture3;
    MyWeatherWidget *widgetFuture4;
    QWidget *widget_2;
    QLabel *labelTime;
    QPushButton *exitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Weather->sizePolicy().hasHeightForWidth());
        Weather->setSizePolicy(sizePolicy);
        Weather->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size:20px;\n"
"	font-weight;bold;\n"
"	font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"}\n"
"QWidget{\n"
"	background-color:rgb(97,111,125);\n"
"}"));
        centralwidget = new QWidget(Weather);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        widget_8->setMinimumSize(QSize(0, 50));
        widget_8->setMaximumSize(QSize(16777215, 50));
        comboBox = new QComboBox(widget_8);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 10, 83, 25));
        comboBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        comboBox->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:white;\n"
"}"));
        comboBox->setEditable(false);
        comboBox->setModelColumn(0);

        verticalLayout->addWidget(widget_8);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widgetToday = new MyWeatherWidget(widget);
        widgetToday->setObjectName(QString::fromUtf8("widgetToday"));

        horizontalLayout->addWidget(widgetToday);

        widgetFuture1 = new MyWeatherWidget(widget);
        widgetFuture1->setObjectName(QString::fromUtf8("widgetFuture1"));

        horizontalLayout->addWidget(widgetFuture1);

        widgetFuture2 = new MyWeatherWidget(widget);
        widgetFuture2->setObjectName(QString::fromUtf8("widgetFuture2"));

        horizontalLayout->addWidget(widgetFuture2);

        widgetFuture3 = new MyWeatherWidget(widget);
        widgetFuture3->setObjectName(QString::fromUtf8("widgetFuture3"));

        horizontalLayout->addWidget(widgetFuture3);

        widgetFuture4 = new MyWeatherWidget(widget);
        widgetFuture4->setObjectName(QString::fromUtf8("widgetFuture4"));

        horizontalLayout->addWidget(widgetFuture4);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(0, 100));
        widget_2->setMaximumSize(QSize(16777215, 100));
        labelTime = new QLabel(widget_2);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setGeometry(QRect(270, 30, 201, 31));
        labelTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        exitBtn = new QPushButton(widget_2);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(700, 40, 71, 61));
        exitBtn->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        exitBtn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        exitBtn->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon);
        exitBtn->setIconSize(QSize(55, 55));

        verticalLayout->addWidget(widget_2);

        Weather->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Weather);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Weather->setMenuBar(menubar);
        statusbar = new QStatusBar(Weather);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Weather->setStatusBar(statusbar);

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QMainWindow *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "MainWindow", nullptr));
        labelTime->setText(QCoreApplication::translate("Weather", "\346\233\264\346\226\260\346\227\266\351\227\264:", nullptr));
        exitBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
