/********************************************************************************
** Form generated from reading UI file 'myweatherwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWEATHERWIDGET_H
#define UI_MYWEATHERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWeatherWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDay;
    QLabel *labelIcon;
    QLabel *labelWeather;
    QLabel *labelTem;
    QLabel *labelDir;
    QLabel *labelLevel;

    void setupUi(QWidget *MyWeatherWidget)
    {
        if (MyWeatherWidget->objectName().isEmpty())
            MyWeatherWidget->setObjectName(QString::fromUtf8("MyWeatherWidget"));
        MyWeatherWidget->resize(146, 343);
        MyWeatherWidget->setStyleSheet(QString::fromUtf8("border-right:2px solid white;"));
        verticalLayout = new QVBoxLayout(MyWeatherWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelDay = new QLabel(MyWeatherWidget);
        labelDay->setObjectName(QString::fromUtf8("labelDay"));
        labelDay->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelDay);

        labelIcon = new QLabel(MyWeatherWidget);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        labelIcon->setPixmap(QPixmap(QString::fromUtf8(":/sunny.png")));

        verticalLayout->addWidget(labelIcon);

        labelWeather = new QLabel(MyWeatherWidget);
        labelWeather->setObjectName(QString::fromUtf8("labelWeather"));
        labelWeather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelWeather);

        labelTem = new QLabel(MyWeatherWidget);
        labelTem->setObjectName(QString::fromUtf8("labelTem"));
        labelTem->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTem);

        labelDir = new QLabel(MyWeatherWidget);
        labelDir->setObjectName(QString::fromUtf8("labelDir"));
        labelDir->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelDir);

        labelLevel = new QLabel(MyWeatherWidget);
        labelLevel->setObjectName(QString::fromUtf8("labelLevel"));
        labelLevel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelLevel);


        retranslateUi(MyWeatherWidget);

        QMetaObject::connectSlotsByName(MyWeatherWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWeatherWidget)
    {
        MyWeatherWidget->setWindowTitle(QCoreApplication::translate("MyWeatherWidget", "Form", nullptr));
        labelDay->setText(QCoreApplication::translate("MyWeatherWidget", "\346\230\237\346\234\237\344\270\200", nullptr));
        labelIcon->setText(QString());
        labelWeather->setText(QCoreApplication::translate("MyWeatherWidget", "\345\244\251\346\260\224:", nullptr));
        labelTem->setText(QCoreApplication::translate("MyWeatherWidget", "\346\270\251\345\272\246:", nullptr));
        labelDir->setText(QCoreApplication::translate("MyWeatherWidget", "\351\243\216\345\220\221:", nullptr));
        labelLevel->setText(QCoreApplication::translate("MyWeatherWidget", "\351\243\216\345\212\233:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWeatherWidget: public Ui_MyWeatherWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWEATHERWIDGET_H
