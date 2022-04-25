#ifndef KIRJAUDU_H
#define KIRJAUDU_H

#include <QWidget>
#include <QMessageBox>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class kirjaudu;
}

class kirjaudu : public QWidget
{
    Q_OBJECT

public:
    explicit kirjaudu(QWidget *parent = nullptr);
    ~kirjaudu();

private:
    Ui::kirjaudu *ui;
};

#endif // KIRJAUDU_H
