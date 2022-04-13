#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pin.h"
#include "ui_pin.h"
#include "valikko.h"
#include "pinv.h"
#include "nosto.h"
#include "loppu.h"
#include "kate.h"
#include "QMainWindow"

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
    void on_btnkortti_clicked();

private:
    Ui::MainWindow *ui;
    pin * ppin;
};
#endif // MAINWINDOW_H
