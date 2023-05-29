#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pageone.h"
#include "pagetwo.h"
#include "pagethird.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置主窗口的最小尺寸
    setMinimumSize(1040,675);

    //创建页面对象
    //当前界面作为page的父窗口，参数为this
    m_pageOneptr = new pageOne(this);   //默认父窗口为空，表示为独立窗口
    m_pageTwoptr = new pageTwo(this);   //参数为this表示以该this作为父窗口
    m_pageThirdptr = new pageThird(this);
    hMainLayout = new QVBoxLayout;

    //设置主窗口中两个widget容器的布局， 其中ListWidget尺寸不变，mainWidget的尺寸跟随主窗口的大小变化
    setMainWindowLayout();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout <<"pushButton_2"<<std::endl;
    m_pageOneptr->close();   //窗口1关闭
//    m_pageTwoptr->move(200,100);
//    m_pageTwoptr->show();  //窗口2显示
    hMainLayout->removeWidget(m_pageOneptr);
    hMainLayout->addWidget(m_pageTwoptr);
    m_pageTwoptr->show();  //窗口2显示

    ui->mainWidget->setLayout(hMainLayout);   //添加布局信息
    ui->mainWidget->setStyleSheet("background-color:green");
}

void MainWindow::on_pushButton_clicked()
{
    std::cout <<"pushButton_1"<<std::endl;
    m_pageTwoptr->close();   //窗口2关闭
//    m_pageOneptr->move(200,100);
//    m_pageOneptr->show();  //窗口1显示

    hMainLayout->removeWidget(m_pageTwoptr);   //移除之前的窗口， 重新添加新的布局
    hMainLayout->addWidget(m_pageOneptr);
    m_pageOneptr->show();  //窗口2显示

    ui->mainWidget->setLayout(hMainLayout);   //添加布局信息    同个widget只能添加一个layout布局， 可以在layout布局中嵌套
    ui->mainWidget->setStyleSheet("background-color:green");

}

void MainWindow::on_pushButton_3_clicked()
{
    std::cout <<"on_pushButton_3_clicked"<<std::endl;
//    m_pageTwoptr->close();   //窗口2关闭
//    m_pageOneptr->move(200,100);
//    m_pageOneptr->show();  //窗口1显示

    hMainLayout->addWidget(m_pageThirdptr);
    m_pageThirdptr->show();  //窗口2显示

    ui->mainWidget->setLayout(hMainLayout);   //添加布局信息    同个widget只能添加一个layout布局， 可以在layout布局中嵌套
    ui->mainWidget->setStyleSheet("background-color:gray");

}

void MainWindow::setMainWindowLayout()
{
    //1、两个widget水平布局
//    QHBoxLayout *mainHLayout = new QHBoxLayout(this);   //创建布局器

//    mainHLayout->addWidget(ui->listWidget);
//    mainHLayout->addWidget(ui->mainWidget);

    //2、设置窗口大小策略 QSizePolicy
    //listWidget 的宽度不变，长度跟随主窗口变动

    // 获取大小策略
    QSizePolicy listSizePolicy = ui->listWidget->sizePolicy();
    QSize sh = ui->listWidget->sizeHint(); //获取空间尺寸
    QSizePolicy::Policy vp = listSizePolicy.verticalPolicy();  //垂直方向布局策略
    QSizePolicy::Policy hp = listSizePolicy.horizontalPolicy();  //水平方向布局策略

    QSizePolicy mainSizePolicy = ui->mainWidget->sizePolicy();

    QSize sh2 = ui->mainWidget->sizeHint(); //获取空间尺寸
    QSizePolicy::Policy vp2 = listSizePolicy.verticalPolicy();  //垂直方向布局策略
    QSizePolicy::Policy hp2 = listSizePolicy.horizontalPolicy();  //水平方向布局策略


    mainSizePolicy.setHorizontalPolicy(QSizePolicy::Expanding);
//    ui->mainWidget->setSizePolicy(mainSizePolicy);


//    this->setLayout(mainHLayout);

}


