#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QSerialPort>
#include <qdebug.h>
#include "logindialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pindll = new Pindll;
    connect(pindll->plogindialog, SIGNAL(loginsignal(QString)),
            this, SLOT(loginslot(QString)));
    serialportDLL = new Serialport_dll(this);


    connect(serialportDLL, SIGNAL(lahetaid(QByteArray)), this,
            SLOT(vastaanotaid(QByteArray)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pindll;
    delete serialportDLL;
}

void MainWindow::vastaanotaid(QByteArray korttiid)
{
    qDebug()<<korttiid;

    if  (korttiid == "0500CA9B7D" or "0500CA9DDA" ){
        pindll->login();
    }

    else {
        qDebug()<<"buu";

    }

}




void MainWindow::asiakasKorttiGetSlot(QNetworkReply *reply)
{
    qDebug() << "Mainwindow kaivetaan replysta pinkoodi";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        QString haettuPinKoodi = json_obj["pin"].toString();
        qDebug() << "tietokannasta haettu pin=" + haettuPinKoodi;
    }
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
