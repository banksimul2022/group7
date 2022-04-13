#include "pin.h"
#include <QWidget>
#include "ui_mainwindow.h"
#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ppin = new pin;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ppin;
}


void MainWindow::on_btnkortti_clicked()
{
    ppin->show();
}

