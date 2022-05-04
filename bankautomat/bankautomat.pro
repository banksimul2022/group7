QT       += core gui network serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../pindll/build/release/ -lpindll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../pindll/build/debug/ -lpindll

INCLUDEPATH += $$PWD/../pindll
DEPENDPATH += $$PWD/../pindll

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../rest_apidll/build/release/ -lrest_apidll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../rest_apidll/build/debug/ -lrest_apidll

INCLUDEPATH += $$PWD/../rest_apidll
DEPENDPATH += $$PWD/../rest_apidll

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../oamk_work/serialport_dll/build/release/ -lserialport_dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../oamk_work/serialport_dll/build/debug/ -lserialport_dll

INCLUDEPATH += $$PWD/../../../../oamk_work/serialport_dll
DEPENDPATH += $$PWD/../../../../oamk_work/serialport_dll
