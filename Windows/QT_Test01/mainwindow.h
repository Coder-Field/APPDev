#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userdefined.h"
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class pageOne;
class pageTwo;
class pageThird;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *hMainLayout;

    void setMainWindowLayout();
public:
   pageOne *m_pageOneptr;
   pageTwo *m_pageTwoptr;
   pageThird *m_pageThirdptr;


private slots:
   void on_pushButton_2_clicked();
   void on_pushButton_clicked();
   void on_pushButton_3_clicked();
};

#endif // MAINWINDOW_H
