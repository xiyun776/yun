/********************************************************************************
** Form generated from reading UI file 'myplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPLAYER_H
#define UI_MYPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QListWidget *listWidget;
    QPushButton *addBtn;
    QPushButton *deleteBtn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSlider *sliderVideo;
    QLabel *labelVideo;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *sliderSound;
    QLabel *labelSound;
    QPushButton *llBtn;
    QPushButton *lBtn;
    QPushButton *pauseBtn;
    QPushButton *rBtn;
    QPushButton *rrBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MyPlayer)
    {
        if (MyPlayer->objectName().isEmpty())
            MyPlayer->setObjectName(QString::fromUtf8("MyPlayer"));
        MyPlayer->resize(805, 647);
        verticalLayout = new QVBoxLayout(MyPlayer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(MyPlayer);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 131, 371));
        listWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        listWidget->setStyleSheet(QString::fromUtf8("*{\n"
"font-size:15px;\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"font-weight:bold;\n"
"background-color:transparent;\n"
"}"));
        addBtn = new QPushButton(widget_3);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(15, 320, 50, 50));
        deleteBtn = new QPushButton(widget_3);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setGeometry(QRect(85, 320, 50, 50));
        verticalLayoutWidget = new QWidget(widget_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 10, 631, 401));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(MyPlayer);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setMaximumSize(QSize(30, 50));

        horizontalLayout_2->addWidget(label_4);

        sliderVideo = new QSlider(widget_2);
        sliderVideo->setObjectName(QString::fromUtf8("sliderVideo"));
        sliderVideo->setMaximumSize(QSize(600, 16777215));
        sliderVideo->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(sliderVideo);

        labelVideo = new QLabel(widget_2);
        labelVideo->setObjectName(QString::fromUtf8("labelVideo"));

        horizontalLayout_2->addWidget(labelVideo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(MyPlayer);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        sliderSound = new QSlider(widget);
        sliderSound->setObjectName(QString::fromUtf8("sliderSound"));
        sliderSound->setMaximum(100);
        sliderSound->setValue(50);
        sliderSound->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(sliderSound);

        labelSound = new QLabel(widget);
        labelSound->setObjectName(QString::fromUtf8("labelSound"));
        labelSound->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(labelSound);

        llBtn = new QPushButton(widget);
        llBtn->setObjectName(QString::fromUtf8("llBtn"));
        llBtn->setMaximumSize(QSize(70, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fast-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        llBtn->setIcon(icon);
        llBtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(llBtn);

        lBtn = new QPushButton(widget);
        lBtn->setObjectName(QString::fromUtf8("lBtn"));
        lBtn->setMaximumSize(QSize(70, 70));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/skip-back.png"), QSize(), QIcon::Normal, QIcon::Off);
        lBtn->setIcon(icon1);
        lBtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(lBtn);

        pauseBtn = new QPushButton(widget);
        pauseBtn->setObjectName(QString::fromUtf8("pauseBtn"));
        pauseBtn->setMaximumSize(QSize(70, 70));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        pauseBtn->setIcon(icon2);
        pauseBtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(pauseBtn);

        rBtn = new QPushButton(widget);
        rBtn->setObjectName(QString::fromUtf8("rBtn"));
        rBtn->setMaximumSize(QSize(70, 70));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        rBtn->setIcon(icon3);
        rBtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(rBtn);

        rrBtn = new QPushButton(widget);
        rrBtn->setObjectName(QString::fromUtf8("rrBtn"));
        rrBtn->setMaximumSize(QSize(70, 70));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fast-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        rrBtn->setIcon(icon4);
        rrBtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(rrBtn);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);


        retranslateUi(MyPlayer);

        QMetaObject::connectSlotsByName(MyPlayer);
    } // setupUi

    void retranslateUi(QWidget *MyPlayer)
    {
        MyPlayer->setWindowTitle(QCoreApplication::translate("MyPlayer", "Form", nullptr));
        addBtn->setText(QCoreApplication::translate("MyPlayer", "\346\267\273\345\212\240", nullptr));
        deleteBtn->setText(QCoreApplication::translate("MyPlayer", "\345\210\240\351\231\244", nullptr));
        label_4->setText(QCoreApplication::translate("MyPlayer", "\346\227\266\351\225\277: ", nullptr));
        labelVideo->setText(QCoreApplication::translate("MyPlayer", "00:00/00:00", nullptr));
        label->setText(QCoreApplication::translate("MyPlayer", "\351\237\263\351\207\217: ", nullptr));
        labelSound->setText(QCoreApplication::translate("MyPlayer", "50/100", nullptr));
        llBtn->setText(QString());
        lBtn->setText(QString());
        pauseBtn->setText(QString());
        rBtn->setText(QString());
        rrBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyPlayer: public Ui_MyPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPLAYER_H
