#include "nosto.h"
#include "ui_nosto.h"

nosto::nosto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
}

nosto::~nosto()
{
    delete ui;
}
