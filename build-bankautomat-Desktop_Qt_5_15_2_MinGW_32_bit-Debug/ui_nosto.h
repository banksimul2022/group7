/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nosto
{
public:
    QPushButton *btn20;
    QPushButton *btn50;
    QPushButton *btn100;
    QPushButton *btn200;
    QPushButton *btn500;
    QPushButton *btnback;
    QLabel *label;

    void setupUi(QWidget *nosto)
    {
        if (nosto->objectName().isEmpty())
            nosto->setObjectName(QString::fromUtf8("nosto"));
        nosto->resize(539, 300);
        btn20 = new QPushButton(nosto);
        btn20->setObjectName(QString::fromUtf8("btn20"));
        btn20->setGeometry(QRect(100, 50, 80, 81));
        btn50 = new QPushButton(nosto);
        btn50->setObjectName(QString::fromUtf8("btn50"));
        btn50->setGeometry(QRect(200, 50, 80, 81));
        btn100 = new QPushButton(nosto);
        btn100->setObjectName(QString::fromUtf8("btn100"));
        btn100->setGeometry(QRect(300, 50, 80, 81));
        btn200 = new QPushButton(nosto);
        btn200->setObjectName(QString::fromUtf8("btn200"));
        btn200->setGeometry(QRect(100, 150, 80, 71));
        btn500 = new QPushButton(nosto);
        btn500->setObjectName(QString::fromUtf8("btn500"));
        btn500->setGeometry(QRect(200, 150, 80, 71));
        btnback = new QPushButton(nosto);
        btnback->setObjectName(QString::fromUtf8("btnback"));
        btnback->setGeometry(QRect(300, 150, 80, 71));
        label = new QLabel(nosto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 240, 91, 16));

        retranslateUi(nosto);

        QMetaObject::connectSlotsByName(nosto);
    } // setupUi

    void retranslateUi(QWidget *nosto)
    {
        nosto->setWindowTitle(QCoreApplication::translate("nosto", "Form", nullptr));
        btn20->setText(QCoreApplication::translate("nosto", "20", nullptr));
        btn50->setText(QCoreApplication::translate("nosto", "50", nullptr));
        btn100->setText(QCoreApplication::translate("nosto", "100", nullptr));
        btn200->setText(QCoreApplication::translate("nosto", "200", nullptr));
        btn500->setText(QCoreApplication::translate("nosto", "500", nullptr));
        btnback->setText(QCoreApplication::translate("nosto", "Takaisin", nullptr));
        label->setText(QCoreApplication::translate("nosto", "Banksimulpro2000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nosto: public Ui_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
