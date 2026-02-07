#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("车载多媒体");
    setFixedSize(width(),height());
    setWindowIcon(QIcon(":/car.jpg"));
    ui->label->setText(QTime::currentTime().toString("HH:mm"));

    ui->weather->setFocusPolicy(Qt::NoFocus);//避免tab键高亮
    ui->map->setFocusPolicy(Qt::NoFocus);//样式表在ui中
    ui->music->setFocusPolicy(Qt::NoFocus);
    ui->video->setFocusPolicy(Qt::NoFocus);

    QLabel *weatherLabel=new QLabel("天 气",this);
    weatherLabel->setGeometry(width()/4-45,height()/3+10,100,100);
    weatherLabel->setStyleSheet(R"(
        QLabel{
            font-size:20px;
            font-family:微软雅黑;
        }
    )");

    QLabel *musicLabel=new QLabel("音 乐",this);
    musicLabel->setGeometry(width()/4-45,height()-160,100,100);
    musicLabel->setStyleSheet(R"(
        QLabel{
            font-size:20px;
            font-family:微软雅黑;
        }
    )");

    QLabel *mapLabel=new QLabel("地 图",this);
    mapLabel->setGeometry(width()/2+185,height()/3+15,100,100);
    mapLabel->setStyleSheet(R"(
        QLabel{
            font-size:20px;
            font-family:微软雅黑;
        }
    )");

    QLabel *videoLabel=new QLabel("视 频",this);
    videoLabel->setGeometry(width()/2+185,height()-155,100,100);
    videoLabel->setStyleSheet(R"(
        QLabel{
            font-size:20px;
            font-family:微软雅黑;
        }
    )");

    //点击才创建对象
    connect(ui->weather,&QPushButton::clicked,[&]{
        weather=new Weather(this);
        qDebug()<<"weather";
        hide();
        weather->show();
    });
    connect(ui->map,&QPushButton::clicked,[&]{
        map=new Map(this);
        qDebug()<<"map";
        hide();
        map->show();
    });
    connect(ui->music,&QPushButton::clicked,[&]{
        music=new Music(this);
        qDebug()<<"music";
        hide();
        music->show();
    });
    connect(ui->video,&QPushButton::clicked,[&]{
        video=new Video(this);
        qDebug()<<"video";
        hide();
        video->show();
    });
}

void MainWindow::paintEvent(QPaintEvent*e)
{
    QPainter p(this);
    QPixmap pix(":/bg.jpg");
    p.drawPixmap(0,0,width(),height(),pix);//画出背景图
    p.end();
}

MainWindow::~MainWindow()
{
    delete ui;
}
