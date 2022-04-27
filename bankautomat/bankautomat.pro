QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    kirjaudu.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    kirjaudu.h \
    mainwindow.h

FORMS += \
    kirjaudu.ui \
    mainwindow.ui

QT += serialport

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../RFID/rfid/build/debug/ -lrfid

INCLUDEPATH += $$PWD/../RFID/rfid
DEPENDPATH += $$PWD/../RFID/rfid
