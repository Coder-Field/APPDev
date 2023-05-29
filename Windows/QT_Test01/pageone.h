#ifndef PAGEONE_H
#define PAGEONE_H

#include <QWidget>
#include "userdefined.h"

namespace Ui {
class pageOne;
}

class pageOne : public QWidget
{
    Q_OBJECT

public:
    explicit pageOne(QWidget *parent = 0);
    ~pageOne();

private:
    void paintEvent(QPaintEvent *e);

private:
    Ui::pageOne *ui;
};

#endif // PAGEONE_H
