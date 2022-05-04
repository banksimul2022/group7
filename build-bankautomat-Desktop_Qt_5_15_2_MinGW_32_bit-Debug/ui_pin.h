/********************************************************************************
** Form generated from reading UI file 'pin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIN_H
#define UI_PIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labeltunnus;
    QLineEdit *lineedittunnus;
    QLabel *labelpin;
    QLineEdit *lineeditpin;
    QPushButton *btnlogin;

    void setupUi(QWidget *pin)
    {
        if (pin->objectName().isEmpty())
            pin->setObjectName(QString::fromUtf8("pin"));
        pin->resize(400, 300);
        verticalLayout = new QVBoxLayout(pin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labeltunnus = new QLabel(pin);
        labeltunnus->setObjectName(QString::fromUtf8("labeltunnus"));

        verticalLayout->addWidget(labeltunnus);

        lineedittunnus = new QLineEdit(pin);
        lineedittunnus->setObjectName(QString::fromUtf8("lineedittunnus"));

        verticalLayout->addWidget(lineedittunnus);

        labelpin = new QLabel(pin);
        labelpin->setObjectName(QString::fromUtf8("labelpin"));

        verticalLayout->addWidget(labelpin);

        lineeditpin = new QLineEdit(pin);
        lineeditpin->setObjectName(QString::fromUtf8("lineeditpin"));

        verticalLayout->addWidget(lineeditpin);

        btnlogin = new QPushButton(pin);
        btnlogin->setObjectName(QString::fromUtf8("btnlogin"));

        verticalLayout->addWidget(btnlogin);


        retranslateUi(pin);

        QMetaObject::connectSlotsByName(pin);
    } // setupUi

    void retranslateUi(QWidget *pin)
    {
        pin->setWindowTitle(QCoreApplication::translate("pin", "Form", nullptr));
        labeltunnus->setText(QCoreApplication::translate("pin", "K\303\244ytt\303\244j\303\244tunnus", nullptr));
        lineedittunnus->setText(QString());
        labelpin->setText(QCoreApplication::translate("pin", "Pin-koodi", nullptr));
        btnlogin->setText(QCoreApplication::translate("pin", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pin: public Ui_pin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIN_H
