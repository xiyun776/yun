/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "myplayer.h"

QT_BEGIN_NAMESPACE

class Ui_Video
{
public:
    QWidget *centralwidget;
    MyPlayer *widget;
    QPushButton *exitBtn;
    QPushButton *upBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Video)
    {
        if (Video->objectName().isEmpty())
            Video->setObjectName(QString::fromUtf8("Video"));
        Video->resize(800, 600);
        centralwidget = new QWidget(Video);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new MyPlayer(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 600));
        exitBtn = new QPushButton(widget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(690, 520, 71, 61));
        exitBtn->setMinimumSize(QSize(71, 61));
        exitBtn->setMaximumSize(QSize(71, 61));
        exitBtn->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon);
        exitBtn->setIconSize(QSize(55, 55));
        upBtn = new QPushButton(widget);
        upBtn->setObjectName(QString::fromUtf8("upBtn"));
        upBtn->setGeometry(QRect(710, 420, 70, 60));
        upBtn->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/up.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        upBtn->setIcon(icon1);
        upBtn->setIconSize(QSize(40, 40));
        Video->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Video);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Video->setMenuBar(menubar);
        statusbar = new QStatusBar(Video);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Video->setStatusBar(statusbar);

        retranslateUi(Video);

        QMetaObject::connectSlotsByName(Video);
    } // setupUi

    void retranslateUi(QMainWindow *Video)
    {
        Video->setWindowTitle(QCoreApplication::translate("Video", "MainWindow", nullptr));
        exitBtn->setText(QString());
        upBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Video: public Ui_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
