#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "kirjaudu.h"
#include "ui_kirjaudu.h"
#include <QMessageBox>
#include <QSerialPort>
#include <QSerialPortInfo>

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
    void on_btnlogin_clicked();

    void on_btnlogout_clicked();

private:
    Ui::MainWindow *ui;
    kirjaudu * pkirjaudu;

};
#endif // MAINWINDOW_H
