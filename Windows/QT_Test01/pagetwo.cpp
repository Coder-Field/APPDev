#include "pagetwo.h"
#include "ui_pagetwo.h"

pageTwo::pageTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pageTwo)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();    //页面隐藏

    ui->frame->setStyleSheet("background-color:yellow");    //获取UI界面上拖动的UI控件
    ui->frame_2->setStyleSheet("background-color:bule");
    ui->widget->setStyleSheet("background-color:black");
}

pageTwo::~pageTwo()
{
    delete ui;
}

void pageTwo::paintEvent(QPaintEvent *e)
{
//    //页面上绘制文字
//    QPainter painter1(this);

//    QRect rc = this->rect();  //获取当前页面尺寸

//    QString strInfo = "页面1";

//    //设置文本颜色
//    painter1.setPan(qRgb(0,255,0));
//    //设置字体
//    painter1.setFont(QFont("隶书",36,QFont::Bold));
//    painter1.drawText(0,-0,this->width(),this->height(),Qt::AlignCenter,strInfo);

}

void pageTwo::on_pushButton_clicked()
{
    std::cout <<"pageTwo::on_pushButton_clicked"<<std::endl;
}
