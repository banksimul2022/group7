#include "pinv.h"
#include "ui_pinv.h"

pinv::pinv(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pinv)
{
    ui->setupUi(this);
}

pinv::~pinv()
{
    delete ui;
}
