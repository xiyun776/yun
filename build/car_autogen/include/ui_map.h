/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *startLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *endLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *navigate;
    QPushButton *exitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(800, 600);
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 118, 780, 120));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 120));
        widget->setMaximumSize(QSize(16777215, 120));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        startLineEdit = new QLineEdit(widget);
        startLineEdit->setObjectName(QString::fromUtf8("startLineEdit"));
        startLineEdit->setMinimumSize(QSize(0, 35));
        QFont font;
        font.setPointSize(10);
        startLineEdit->setFont(font);
        startLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #d9d9d9;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1890ff;\n"
"}"));

        gridLayout->addWidget(startLineEdit, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        endLineEdit = new QLineEdit(widget);
        endLineEdit->setObjectName(QString::fromUtf8("endLineEdit"));
        endLineEdit->setMinimumSize(QSize(0, 35));
        endLineEdit->setFont(font);
        endLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #d9d9d9;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1890ff;\n"
"}"));

        gridLayout->addWidget(endLineEdit, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        navigate = new QPushButton(centralwidget);
        navigate->setObjectName(QString::fromUtf8("navigate"));
        navigate->setGeometry(QRect(300, 260, 140, 40));
        navigate->setMinimumSize(QSize(140, 40));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        navigate->setFont(font2);
        navigate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1890ff;\n"
"    color: white;\n"
"    border-radius: 4px;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #40a9ff;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #096dd9;\n"
"}"));
        exitBtn = new QPushButton(centralwidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(690, 520, 71, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exitBtn->sizePolicy().hasHeightForWidth());
        exitBtn->setSizePolicy(sizePolicy1);
        exitBtn->setMinimumSize(QSize(71, 61));
        exitBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:transparent;\n"
"    border: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon);
        exitBtn->setIconSize(QSize(55, 55));
        Map->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Map);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Map->setMenuBar(menubar);
        statusbar = new QStatusBar(Map);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Map->setStatusBar(statusbar);

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QCoreApplication::translate("Map", "MainWindow", nullptr));
        startLineEdit->setPlaceholderText(QCoreApplication::translate("Map", "\350\257\267\350\276\223\345\205\245\350\265\267\347\202\271\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("Map", "\350\265\267\347\202\271:", nullptr));
        label_2->setText(QCoreApplication::translate("Map", "\347\273\210\347\202\271:", nullptr));
        endLineEdit->setPlaceholderText(QCoreApplication::translate("Map", "\350\257\267\350\276\223\345\205\245\347\273\210\347\202\271\345\234\260\345\235\200", nullptr));
        navigate->setText(QCoreApplication::translate("Map", "\360\237\232\227 \345\274\200\345\247\213\345\257\274\350\210\252", nullptr));
        exitBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
