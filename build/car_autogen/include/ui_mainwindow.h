/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *map;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *music;
    QPushButton *video;
    QPushButton *weather;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        map = new QPushButton(centralwidget);
        map->setObjectName(QString::fromUtf8("map"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(map->sizePolicy().hasHeightForWidth());
        map->setSizePolicy(sizePolicy);
        map->setStyleSheet(QString::fromUtf8(" background-color:transparent;/*\351\200\217\346\230\216\350\203\214\346\231\257*/\n"
"            border:none;/*\346\227\240\350\276\271\346\241\206*/\n"
"            background-image:url(:/map.png);/*\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"            background-repeat:no-repeat;/*\347\246\201\346\255\242\345\271\263\351\223\272\357\274\214\345\217\252\346\230\276\347\244\272\344\270\200\345\274\240\345\233\276\347\211\207*/\n"
"            background-position:center center;/*\344\275\215\347\275\256\345\261\205\344\270\255*/"));

        gridLayout->addWidget(map, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 6, 2, 1, 1);

        music = new QPushButton(centralwidget);
        music->setObjectName(QString::fromUtf8("music"));
        sizePolicy.setHeightForWidth(music->sizePolicy().hasHeightForWidth());
        music->setSizePolicy(sizePolicy);
        music->setStyleSheet(QString::fromUtf8("background-color:transparent;/*\351\200\217\346\230\216\350\203\214\346\231\257*/\n"
"            border:none;/*\346\227\240\350\276\271\346\241\206*/\n"
"            background-image:url(:/music.png);/*\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"            background-repeat:no-repeat;/*\347\246\201\346\255\242\345\271\263\351\223\272\357\274\214\345\217\252\346\230\276\347\244\272\344\270\200\345\274\240\345\233\276\347\211\207*/\n"
"            background-position:center center;/*\344\275\215\347\275\256\345\261\205\344\270\255*/"));

        gridLayout->addWidget(music, 5, 2, 1, 1);

        video = new QPushButton(centralwidget);
        video->setObjectName(QString::fromUtf8("video"));
        sizePolicy.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy);
        video->setStyleSheet(QString::fromUtf8("background-color:transparent;/*\351\200\217\346\230\216\350\203\214\346\231\257*/\n"
"            border:none;/*\346\227\240\350\276\271\346\241\206*/\n"
"            background-image:url(:/video.png);/*\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"            background-repeat:no-repeat;/*\347\246\201\346\255\242\345\271\263\351\223\272\357\274\214\345\217\252\346\230\276\347\244\272\344\270\200\345\274\240\345\233\276\347\211\207*/\n"
"            background-position:center center;/*\344\275\215\347\275\256\345\261\205\344\270\255*/"));

        gridLayout->addWidget(video, 5, 4, 1, 1);

        weather = new QPushButton(centralwidget);
        weather->setObjectName(QString::fromUtf8("weather"));
        sizePolicy.setHeightForWidth(weather->sizePolicy().hasHeightForWidth());
        weather->setSizePolicy(sizePolicy);
        weather->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"            background-color:transparent;/*\351\200\217\346\230\216\350\203\214\346\231\257*/\n"
"            border:none;/*\346\227\240\350\276\271\346\241\206*/\n"
"            background-image:url(:/weather.png);/*\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"            background-repeat:no-repeat;/*\347\246\201\346\255\242\345\271\263\351\223\272\357\274\214\345\217\252\346\230\276\347\244\272\344\270\200\345\274\240\345\233\276\347\211\207*/\n"
"            background-position:center center;/*\344\275\215\347\275\256\345\261\205\344\270\255*/\n"
"        }"));

        gridLayout->addWidget(weather, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 5, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 50));
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-weight:bold;\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        map->setText(QString());
        music->setText(QString());
        video->setText(QString());
        weather->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
