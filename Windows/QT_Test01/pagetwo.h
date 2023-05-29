#ifndef PAGETWO_H
#define PAGETWO_H

#include <QDialog>
#include "userdefined.h"

namespace Ui {
class pageTwo;
}

class pageTwo : public QDialog
{
    Q_OBJECT

public:
    explicit pageTwo(QWidget *parent = 0);
    ~pageTwo();

private slots:
    void on_pushButton_clicked();

private:
    void paintEvent(QPaintEvent *e);

private:
    Ui::pageTwo *ui;
};

#endif // PAGETWO_H
