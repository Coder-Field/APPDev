#include "pageone.h"
#include "ui_pageone.h"
#include <QGroupBox>
#include <QRadioButton>
#include <QPushButton>
#include <QCheckBox>
#include <QGridLayout>  //网格布局
#include <QVBoxLayout>  //垂直布局
#include <QHBoxLayout>  //水平布局
#include <QMenu>

pageOne::pageOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageOne)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();    //页面隐藏

    //创建各种控件测试

    //创建组合框
    QGroupBox *gb1=new QGroupBox("单选框按钮1");
    //创建单选按钮
    QRadioButton *rb1 = new QRadioButton("111");
    QRadioButton *rb2 = new QRadioButton("222");
    //创建垂直布局
    QVBoxLayout *vb1 = new QVBoxLayout(this);  //当该布局不直接用于该widget,不用父类this
    //将控件加入布局
    vb1->addWidget(rb1);   //添加窗口
    vb1->addWidget(rb2);
    //垂直布局排列加入组合框中
    gb1->setLayout(vb1);   //添加布局，布局嵌套

    //创建垂直布局
    QVBoxLayout *vb2 = new QVBoxLayout(this);
    vb2->addWidget(gb1);

//    ui->wi
//    //创建网格布局控件
//    QGridLayout *fl_1= new QGridLayout(this);
//    //将组合框布局到网格中0行0列的地方，占用1行1列
//    fl_1->addWidget(gb1,0,0,1,1);

//    ui->stackedWidget->
//    ui->scrollArea->
//    ui->toolBox
//    ui->widget
//    ui->frame
//    ui->tabWidget


}

pageOne::~pageOne()
{
    delete ui;
}


void pageOne::paintEvent(QPaintEvent *e)
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
