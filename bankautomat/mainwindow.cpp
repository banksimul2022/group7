#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
}

