#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QObject>
#include <QDebug>
#include <QString>
#include "pindll.h"
#include "logindialog.h"
#include <QJsonDocument>
#include <QtNetwork>
#include <QNetworkAccessManager>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void asiakasKorttiGetSlot(QNetworkReply *reply); // näitä perkeleesti perjantaina

    void on_btnlogin_clicked();

    void on_btnlogout_clicked();

    void on_btn20_clicked();

    void on_btn50_clicked();

    void on_btn100_clicked();

    void on_btn200_clicked();

    void on_btn500_clicked();

    void loginslot (QString);

private:
    Ui::MainWindow *ui;
    Pindll * pindll;

};
#endif // MAINWINDOW_H
