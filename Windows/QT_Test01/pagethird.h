#ifndef PAGETHIRD_H
#define PAGETHIRD_H

#include <QWidget>
#include "userdefined.h"
#include <QStandardItemModel>


namespace Ui {
class pageThird;
}

class pageThird : public QWidget
{
    Q_OBJECT

public:
    explicit pageThird(QWidget *parent = 0);
    ~pageThird();

private:
    Ui::pageThird *ui;

    QStandardItemModel *ItemModel;
    void initListView();
    void initColumnView();
    void initTreeView();
    void initTableView();
    void testWidget();
    void testFrame();

private slots:
    void on_columnView_clicked(const QModelIndex &index);
    void showListViewClick(QModelIndex index);  //listView index点击事件响应槽函数
    void on_treeView_clicked(const QModelIndex &index);
    void on_tableView_clicked(const QModelIndex &index);

};

#endif // PAGETHIRD_H
