#ifndef PIN_H
#define PIN_H

#include <QWidget>
#include "ui_pin.h"
#include "valikko.h"
#include "QMainWindow"
#include "pinv.h"
#include "nosto.h"
#include "loppu.h"
#include "kate.h"

namespace Ui {
class pin;
}

class pin : public QWidget
{
    Q_OBJECT

public:
    explicit pin(QWidget *parent = nullptr);
    ~pin();

private slots:
    void on_btnlogin_clicked();

private:
    Ui::pin *ui;
    valikko * pvalikko;
};

#endif // PIN_H
