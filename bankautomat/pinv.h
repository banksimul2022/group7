#ifndef PINV_H
#define PINV_H

#include <QWidget>
#include "ui_pin.h"
#include "valikko.h"
#include "QMainWindow"
#include "nosto.h"
#include "loppu.h"
#include "kate.h"

namespace Ui {
class pinv;
}

class pinv : public QWidget
{
    Q_OBJECT

public:
    explicit pinv(QWidget *parent = nullptr);
    ~pinv();

private:
    Ui::pinv *ui;
};

#endif // PINV_H
