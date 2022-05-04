/********************************************************************************
** Form generated from reading UI file 'loppu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOPPU_H
#define UI_LOPPU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loppu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *btnexit;

    void setupUi(QWidget *loppu)
    {
        if (loppu->objectName().isEmpty())
            loppu->setObjectName(QString::fromUtf8("loppu"));
        loppu->resize(400, 300);
        verticalLayout = new QVBoxLayout(loppu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(loppu);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        btnexit = new QPushButton(loppu);
        btnexit->setObjectName(QString::fromUtf8("btnexit"));

        verticalLayout->addWidget(btnexit);


        retranslateUi(loppu);

        QMetaObject::connectSlotsByName(loppu);
    } // setupUi

    void retranslateUi(QWidget *loppu)
    {
        loppu->setWindowTitle(QCoreApplication::translate("loppu", "Form", nullptr));
        label->setText(QCoreApplication::translate("loppu", "Nosto onnistui, ota kortti :--)", nullptr));
        btnexit->setText(QCoreApplication::translate("loppu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loppu: public Ui_loppu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOPPU_H
