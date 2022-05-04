#include "logindialog.h"
#include "ui_logindialog.h"
#include <qdebug.h>

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_buttonBox_accepted()
{
    qDebug() << "pinkoodi annettu";
    QString t = ui->lineEditpin->text();
    emit loginsignal(t);
}

