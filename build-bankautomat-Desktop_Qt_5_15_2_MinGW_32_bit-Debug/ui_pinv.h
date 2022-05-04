/********************************************************************************
** Form generated from reading UI file 'pinv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINV_H
#define UI_PINV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinv
{
public:
    QPushButton *btnpin;
    QLabel *label;

    void setupUi(QWidget *pinv)
    {
        if (pinv->objectName().isEmpty())
            pinv->setObjectName(QString::fromUtf8("pinv"));
        pinv->resize(400, 300);
        btnpin = new QPushButton(pinv);
        btnpin->setObjectName(QString::fromUtf8("btnpin"));
        btnpin->setGeometry(QRect(120, 160, 80, 18));
        label = new QLabel(pinv);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 130, 81, 21));

        retranslateUi(pinv);

        QMetaObject::connectSlotsByName(pinv);
    } // setupUi

    void retranslateUi(QWidget *pinv)
    {
        pinv->setWindowTitle(QCoreApplication::translate("pinv", "Form", nullptr));
        btnpin->setText(QCoreApplication::translate("pinv", "Ok", nullptr));
        label->setText(QCoreApplication::translate("pinv", "Pin v\303\244\303\244rin :(", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pinv: public Ui_pinv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINV_H
