#ifndef LOPPU_H
#define LOPPU_H

#include <QWidget>
#include <QWidget>
#include "ui_pin.h"
#include "QMainWindow"
#include "kate.h"

namespace Ui {
class loppu;
}

class loppu : public QWidget
{
    Q_OBJECT

public:
    explicit loppu(QWidget *parent = nullptr);
    ~loppu();

private:
    Ui::loppu *ui;
};

#endif // LOPPU_H
