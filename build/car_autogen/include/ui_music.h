/********************************************************************************
** Form generated from reading UI file 'music.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_H
#define UI_MUSIC_H

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

class Ui_Music
{
public:
    QWidget *centralwidget;
    MyPlayer *widget;
    QPushButton *exitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Music)
    {
        if (Music->objectName().isEmpty())
            Music->setObjectName(QString::fromUtf8("Music"));
        Music->resize(800, 600);
        centralwidget = new QWidget(Music);
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
        Music->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Music);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Music->setMenuBar(menubar);
        statusbar = new QStatusBar(Music);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Music->setStatusBar(statusbar);

        retranslateUi(Music);

        QMetaObject::connectSlotsByName(Music);
    } // setupUi

    void retranslateUi(QMainWindow *Music)
    {
        Music->setWindowTitle(QCoreApplication::translate("Music", "MainWindow", nullptr));
        exitBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Music: public Ui_Music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
