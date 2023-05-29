#include "pagethird.h"
#include "ui_pagethird.h"
#include <QMessageBox>
#include <QVBoxLayout>  //垂直布局
#include <QHBoxLayout>  //水平布局
#include <QPushButton>

pageThird::pageThird(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageThird)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();    //启动时默认页面隐藏

    initListView();
    initColumnView();
    initTreeView();
    initTableView();

    testWidget();
    testFrame();
}

pageThird::~pageThird()
{
    delete ui;
}

void  pageThird::initListView()
{
    ItemModel = new QStandardItemModel(this);

    QStringList strList; // 需要展示的数据
    strList.append("A");
    strList.append("B");
    strList.append("C");
    strList.append("D");
    strList.append("E");
    strList.append("F");
    strList.append("G");

    int nCount = strList.size();
    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        ItemModel->appendRow(item);
    }
    ui->listView->setModel(ItemModel); // listview设置Model

//    ui->listView->setFixedSize(200,300);   //设置尺寸
    // 绑定事件
    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(showListViewClick(QModelIndex)));
}

void pageThird::initColumnView()
{
    ItemModel->clear();

    QStringList strList; // 需要展示的数据
    strList.append("A");
    strList.append("B");
    strList.append("C");
    strList.append("D");
    strList.append("E");
    strList.append("F");
    strList.append("G");

    int nCount = strList.size();
    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        ItemModel->appendRow(item);
    }

    ui->columnView->setModel(ItemModel);
}

void pageThird::initTreeView()
{
    ItemModel->clear();
    ItemModel->setHorizontalHeaderLabels(QStringList(QStringLiteral("资源")));
    QStringList strList; // 需要展示的数据
    strList.append("A");
    strList.append("B");
    strList.append("C");
    strList.append("D");
    strList.append("E");
    strList.append("F");
    strList.append("G");

    int nCount = strList.size();
    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        ItemModel->appendRow(item);
    }

    ui->treeView->setModel(ItemModel);
}

void pageThird::initTableView()
{
    ItemModel->clear();
    ItemModel->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");
    QStandardItem *item00 = new QStandardItem("张三");
    QStandardItem *item10 = new QStandardItem("张四");
    QStandardItem *item20 = new QStandardItem("张五");

    QStandardItem *item01 = new QStandardItem("男");
    QStandardItem *item11 = new QStandardItem("女");
    QStandardItem *item21 = new QStandardItem("男");

    QStandardItem *item02 = new QStandardItem("15");
    QStandardItem *item12 = new QStandardItem("14");
    QStandardItem *item22 = new QStandardItem("16");

    ItemModel->setItem(0,0,item00);
    ItemModel->setItem(1,0,item10);
    ItemModel->setItem(2,0,item20);

    ItemModel->setItem(0,1,item01);
    ItemModel->setItem(1,1,item11);
    ItemModel->setItem(2,1,item21);

    ItemModel->setItem(0,2,item02);
    ItemModel->setItem(1,2,item12);
    ItemModel->setItem(2,2,item22);

    ui->tableView->setModel(ItemModel);   //tableView设置数据
}



void pageThird::on_columnView_clicked(const QModelIndex &index)
{
    std::cout <<"on_columnView_clicked"<<std::endl;
    QString strTemp;
    strTemp = index.data().toString();

    QMessageBox msg;
    msg.setText(strTemp);
    msg.exec();
}

void pageThird::showListViewClick(QModelIndex index)
{
    std::cout <<"showListViewClick"<<std::endl;
    QString strTemp;
    strTemp = index.data().toString();

    QMessageBox msg;
    msg.setText(strTemp);
    msg.exec();
}


void pageThird::on_treeView_clicked(const QModelIndex &index)
{
    std::cout <<"on_treeView_clicked"<<std::endl;
    QString strTemp;
    strTemp = index.data().toString();

    QMessageBox msg;
    msg.setText(strTemp);
    msg.exec();
}

void pageThird::on_tableView_clicked(const QModelIndex &index)
{
    std::cout <<"on_tableView_clicked"<<std::endl;
    QString strTemp;
    strTemp = index.data().toString();

    QMessageBox msg;
    msg.setText(strTemp);
    msg.exec();
}

void pageThird::testWidget()
{
    QPushButton *button_1 = new QPushButton;
    button_1->setText("testWidget pushButton");

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(button_1);

    ui->bxcwidget->setLayout(vLayout);
    ui->bxcwidget->setStyleSheet("background-color:yellow");
}

void pageThird::testFrame()
{
    ui->bxcframe->setStyleSheet("background-color:red");
}
