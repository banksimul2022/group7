#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "kirjaudu.h"
#include <QMessageBox>
#include <QString>
#include <QSerialPort>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pkirjaudu= new kirjaudu;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pkirjaudu;
}

void MainWindow::on_btnlogin_clicked()
{
    pkirjaudu->show();
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
