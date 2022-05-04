#ifndef SERIALPORT_DLL_H
#define SERIALPORT_DLL_H

#include "serialport_dll_global.h"
#include <QSerialPort>

class SERIALPORT_DLL_EXPORT Serialport_dll : public QObject

{  Q_OBJECT

public:
    Serialport_dll(QObject * parent);
    ~Serialport_dll();

signals:
    void lahetaid(QByteArray);

private slots:
    void serialSlot();


private:
    QSerialPort * serialport;
};

#endif // SERIALPORT_DLL_H
