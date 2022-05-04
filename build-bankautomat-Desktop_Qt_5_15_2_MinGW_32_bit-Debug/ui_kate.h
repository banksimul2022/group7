/********************************************************************************
** Form generated from reading UI file 'kate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KATE_H
#define UI_KATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kate
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *btnkate;

    void setupUi(QWidget *kate)
    {
        if (kate->objectName().isEmpty())
            kate->setObjectName(QString::fromUtf8("kate"));
        kate->resize(400, 300);
        verticalLayout = new QVBoxLayout(kate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(kate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        btnkate = new QPushButton(kate);
        btnkate->setObjectName(QString::fromUtf8("btnkate"));

        verticalLayout->addWidget(btnkate);


        retranslateUi(kate);

        QMetaObject::connectSlotsByName(kate);
    } // setupUi

    void retranslateUi(QWidget *kate)
    {
        kate->setWindowTitle(QCoreApplication::translate("kate", "Form", nullptr));
        label->setText(QCoreApplication::translate("kate", "Ei katetta :(", nullptr));
        btnkate->setText(QCoreApplication::translate("kate", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kate: public Ui_kate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KATE_H
