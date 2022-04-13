#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>
#include "ui_pin.h"
#include "QMainWindow"
#include "loppu.h"
#include "kate.h"

namespace Ui {
class nosto;
}

class nosto : public QWidget
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr);
    ~nosto();

private:
    Ui::nosto *ui;
};

#endif // NOSTO_H
