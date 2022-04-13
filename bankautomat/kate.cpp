#include "pin.h"
#include "ui_pin.h"
#include "valikko.h"
#include "mainwindow.h"
#include "pinv.h"
#include "nosto.h"
#include "loppu.h"
#include "kate.h"
#include "ui_kate.h"

kate::kate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kate)
{
    ui->setupUi(this);
}

kate::~kate()
{
    delete ui;
}
