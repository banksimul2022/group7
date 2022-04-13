#ifndef KATE_H
#define KATE_H

#include <QWidget>
#include "ui_pin.h"
#include "QMainWindow"
namespace Ui {
class kate;
}

class kate : public QWidget
{
    Q_OBJECT

public:
    explicit kate(QWidget *parent = nullptr);
    ~kate();

private:
    Ui::kate *ui;
};

#endif // KATE_H
