#include "pin.h"
#include "ui_pin.h"
#include "valikko.h"
#include "mainwindow.h"
#include "pinv.h"
#include "nosto.h"
#include "loppu.h"
#include "ui_loppu.h"

loppu::loppu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loppu)
{
    ui->setupUi(this);
}

loppu::~loppu()
{
    delete ui;
}
