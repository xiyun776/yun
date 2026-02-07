#include "myplayer.h"
#include "ui_myplayer.h"

MyPlayer::MyPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyPlayer)
{
    ui->setupUi(this);
    ui->sliderSound->setRange(0,100);//音量范围(0,100)

    player=new QMediaPlayer(this);
    audio=new QAudioOutput(this);
    audio->setVolume(0.5);//默认音量大小为0.5
    video =new QVideoWidget(this);
    player->setAudioOutput(audio);
    player->setVideoOutput(video);
    ui->layout->addWidget(video);
    video->setFixedSize(630,400);
    ui->deleteBtn->setEnabled(false);//默认禁用删除按钮

    //添加文件按钮
    connect(ui->addBtn,&QPushButton::clicked,[&](){
        QString filePath=QFileDialog::getOpenFileName(this,"选择文件","../../","音视频文件(*.mp4 *.avi)");
        //父窗口 窗口左上角名称 默认文件名 根据后缀筛选文件
        if(!filePath.isEmpty())
        {
            QListWidgetItem *item=new QListWidgetItem(QFileInfo(filePath).fileName());
            item->setData(Qt::UserRole,filePath);
            ui->listWidget->addItem(item);
        }
    });
    //删除文件按钮
    connect(ui->deleteBtn,&QPushButton::clicked,[&](){
        delete ui->listWidget->currentItem();
        ui->listWidget->setCurrentRow(0);
        ui->deleteBtn->setEnabled(false);//删除之后禁用
        player->stop();
    });

    //点击文件
    connect(ui->listWidget,&QListWidget::itemClicked,[&](QListWidgetItem *item){
        qDebug()<<item->text();
        ui->deleteBtn->setEnabled(true);//可以删除文件
        player->stop();
        player->setSource(QUrl::fromLocalFile(ui->listWidget->currentItem()->data(Qt::UserRole).toString()));
    });

    //当前视频播放完毕或者视频资源加载完毕
    connect(player,&QMediaPlayer::mediaStatusChanged,[&](QMediaPlayer::MediaStatus status){
        if(status==QMediaPlayer::EndOfMedia)
            ui->listWidget->itemClicked(ui->listWidget->currentItem());//重新播放当前项目
        else if(status==QMediaPlayer::LoadedMedia)
            ui->sliderVideo->setRange(0,player->duration());//loading->loaded触发信号(视频加载完成)
    });

    //调用player->stop
    connect(player,&QMediaPlayer::playbackStateChanged,[&](QMediaPlayer::PlaybackState status){
        if(status==QMediaPlayer::StoppedState)
        {
            if(path==":/pause.png")
            {
                path=":/play.png";
                ui->pauseBtn->setIcon(QIcon(path));
            }
            ui->labelVideo->setText("00:00/00:00");
        }
    });

    //视频播放长度发生变化(自动频繁发生)
    connect(player,&QMediaPlayer::positionChanged,[&](){
        ui->labelVideo->setText(QString("%1/%2").arg(myFromTime(player->position())).arg(myFromTime(player->duration())));
        ui->sliderVideo->setValue(player->position());
    });

    //视频进度条正在拖动,sliderMoved只是预览,不影响setValue()
    connect(ui->sliderVideo,&QSlider::sliderMoved,[&](int val){
        player->setPosition(val);//视频长度变化会引发上面的connect
    });

    //音量进度条被拖动
    connect(ui->sliderSound,&QSlider::sliderMoved,[&](int val){
        audio->setVolume(val/100.0);
        ui->labelSound->setText(QString("%1/100").arg(val));
    });
}


void MyPlayer::on_pauseBtn_clicked()
{
    if(!ui->listWidget->count()||!ui->deleteBtn->isEnabled())
    {
        qDebug()<<"请添加文件并点击选择后进行播放";
        return;
    }
    if(path==":/play.png")//播放
    {
        path=":/pause.png";
        ui->pauseBtn->setIcon(QIcon(path));
        player->play();
    }
    else//暂停
    {
        path=":/play.png";
        ui->pauseBtn->setIcon(QIcon(path));
        player->pause();
    }
}

void MyPlayer::on_llBtn_clicked()
{
    //向前10s且视频加载完成(中间可能有LoadedMedia Buffed(ing)Media一系列状态,所以反着判断)
    if(player->mediaStatus()==QMediaPlayer::InvalidMedia||player->mediaStatus()==QMediaPlayer::NoMedia||
        player->mediaStatus()==QMediaPlayer::LoadingMedia)return;
    player->setPosition(qMax(player->position()-10000,0));
}

void MyPlayer::on_lBtn_clicked()
{
    //播放上一个视频
    int N=ui->listWidget->count();
    if(!N)
    {
        qDebug()<<"请添加文件点击播放后再操作";
        return;
    }
    int idx=(ui->listWidget->currentRow()-1+N)%N;
    ui->listWidget->setCurrentRow(idx);//需要手动先改变位置下标
    ui->listWidget->itemClicked(ui->listWidget->item(idx));//只发送点击信号
}

void MyPlayer::on_rrBtn_clicked()
{
    //向后10s且视频加载完成(中间可能有LoadedMedia Buffed(ing)Media一系列状态,所以反着判断)
    if(player->mediaStatus()==QMediaPlayer::InvalidMedia||player->mediaStatus()==QMediaPlayer::NoMedia||
        player->mediaStatus()==QMediaPlayer::LoadingMedia)return;
    player->setPosition(qMin(player->position()+10000,player->duration()));
}

void MyPlayer::on_rBtn_clicked()
{
    //播放下一个视频
    int N=ui->listWidget->count();
    if(!N)
    {
        qDebug()<<"请添加文件点击播放后再操作";
        return;
    }
    int idx=(ui->listWidget->currentRow()+1)%N;
    ui->listWidget->setCurrentRow(idx);//需要手动先改变位置下标
    ui->listWidget->itemClicked(ui->listWidget->item(idx));
}

QString MyPlayer::myFromTime(qint64 ms)
{
    if(ms<=0)return "00:00";
    int ts=ms/1000;
    int h=ts/3600,m=ts/60%60,s=ts%60;
    if(h>0)return QString("%1:%2:%3").arg(h,2,10,QChar('0'))//值 位数 进制 补0
            .arg(m,2,10,QChar('0')).arg(s,2,10,QChar('0'));
    else return QString("%1:%2").arg(m,2,10,QChar('0')).arg(s,2,10,QChar('0'));
}

void MyPlayer::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(0,0,width(),height(),QPixmap(":/myplayer_bg.jpg"));
    p.end();
}

MyPlayer::~MyPlayer()
{
    delete ui;
}
