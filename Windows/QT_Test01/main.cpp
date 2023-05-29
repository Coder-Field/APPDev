#include "mainwindow.h"
#include <QApplication>

#include "userdefined.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    //创建主窗口
//        QWidget widget;
//        widget.setWindowTitle("分组布局");
//        //设置窗口布局
//        widget.setGeometry(100,100,600,400);

//        //向主窗口中添加一个水平布局控件
//        QHBoxLayout *hlayout=new QHBoxLayout;
//        QVBoxLayout *vlayout=new QVBoxLayout;

//        //create pushbutton
//        QPushButton left,center,right,top,bottom;
//        left.setText("left");
//        center.setText("center");
//        right.setText("right");
//        top.setText("top");
//        bottom.setText("bottom");

//        vlayout->addWidget(&top);
//        vlayout->addItem(new QSpacerItem(50,50,QSizePolicy::Minimum,QSizePolicy::Expanding));
//        vlayout->addWidget(&center);
//         vlayout->addItem(new QSpacerItem(50,50,QSizePolicy::Minimum,QSizePolicy::Expanding));
//        vlayout->addWidget(&bottom);

//        hlayout->addWidget(&left);
//        hlayout->addSpacerItem(new QSpacerItem(10,10,QSizePolicy::Expanding,QSizePolicy::Minimum));
//        hlayout->addLayout(vlayout);
//        hlayout->addSpacerItem(new QSpacerItem(10,10,QSizePolicy::Expanding,QSizePolicy::Minimum));
//        hlayout->addWidget(&right);


//        QGridLayout *grid=new QGridLayout;
//        grid->addLayout(hlayout,0,0);

//        widget.setLayout(grid);
//        widget.show();

    return a.exec();
}
