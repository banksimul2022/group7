#include "serialport_dll.h"
#include <qdebug.h>

Serialport_dll::Serialport_dll(QObject *parent) :
    QObject{parent}, serialport(new QSerialPort)
{
    serialport->setPortName("COM7");
    serialport->setBaudRate(9600);
    serialport->setDataBits(QSerialPort::DataBits(8));
    serialport->setParity(QSerialPort::Parity(0));
    serialport->setStopBits(QSerialPort::StopBits(1));
    serialport->setFlowControl(QSerialPort::FlowControl(0));

    connect(serialport,&QSerialPort::readyRead, this, &Serialport_dll::serialSlot);

    if(serialport->open(QIODevice::ReadWrite)){
        qDebug()<<serialport->errorString();
    } else {
        qDebug()<<"serial open ok";
    }
}

Serialport_dll::~Serialport_dll()
{
    delete serialport;
}

void Serialport_dll::serialSlot()
{
    QByteArray korttiid = serialport->readAll();
    qDebug()<<korttiid;
    emit lahetaid(korttiid);
}
