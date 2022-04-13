#include "ui_valikko.h"
#include "valikko.h"

valikko::valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::valikko)
{
    ui->setupUi(this);
}

valikko::~valikko()
{
    delete ui;
}

void valikko::on_btnnosto_clicked()
{

}

