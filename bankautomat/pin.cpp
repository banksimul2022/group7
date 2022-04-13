#include "ui_pin.h"
#include "pin.h"

pin::pin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pin)
{
    ui->setupUi(this);
    pvalikko = new valikko;
}

pin::~pin()
{
    delete ui;
    delete pvalikko;
}

void pin::on_btnlogin_clicked()
{
    pvalikko->show();
}

