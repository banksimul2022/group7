#ifndef VALIKKO_H
#define VALIKKO_H

#include <QWidget>
#include "ui_pin.h"
#include "QMainWindow"
#include "nosto.h"
#include "loppu.h"
#include "kate.h"

namespace Ui {
class valikko;
}

class valikko : public QWidget
{
    Q_OBJECT

public:
    explicit valikko(QWidget *parent = nullptr);
    ~valikko();

private slots:
    void on_btnnosto_clicked();

private:
    Ui::valikko *ui;
};

#endif // VALIKKO_H
