#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QSerialPort>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pindll = new Pindll;
    connect(pindll->plogindialog, SIGNAL(loginsignal(QString)),
            this, SLOT(loginslot(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pindll;
}

void MainWindow::on_btnlogin_clicked()
{
    pindll->login();
}


void MainWindow::on_btnlogout_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Kirjauduit ulos, ota kortti"));
    this->close();
}


void MainWindow::on_btn20_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Nostit 20€"));
}


void MainWindow::on_btn50_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Nostit 50€"));
}


void MainWindow::on_btn100_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Nostit 100€"));
}


void MainWindow::on_btn200_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Nostit 200€"));
}


void MainWindow::on_btn500_clicked()
{
    QMessageBox::information(this, tr("banksimulpro2000"), tr ("Nostit 500€"));
}

void MainWindow::loginslot(QString t)
{
    qDebug() <<"mainwindow"+ t;
}
