#include "kirjaudu.h"
#include "ui_kirjaudu.h"
#include <QMessageBox>
#include <QString>

kirjaudu::kirjaudu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kirjaudu)
{
    ui->setupUi(this);
}

kirjaudu::~kirjaudu()
{
    delete ui;
}
