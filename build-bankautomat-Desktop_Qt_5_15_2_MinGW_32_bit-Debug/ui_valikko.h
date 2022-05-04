/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_valikko
{
public:
    QTextEdit *texteditsaldo;
    QTextEdit *textedittili;
    QPushButton *btnlogout;
    QPushButton *btnnosto;
    QLabel *labelsaldo;
    QLabel *labeltili;
    QLabel *labelpro;

    void setupUi(QWidget *valikko)
    {
        if (valikko->objectName().isEmpty())
            valikko->setObjectName(QString::fromUtf8("valikko"));
        valikko->resize(556, 302);
        texteditsaldo = new QTextEdit(valikko);
        texteditsaldo->setObjectName(QString::fromUtf8("texteditsaldo"));
        texteditsaldo->setGeometry(QRect(10, 90, 104, 191));
        textedittili = new QTextEdit(valikko);
        textedittili->setObjectName(QString::fromUtf8("textedittili"));
        textedittili->setGeometry(QRect(130, 90, 104, 191));
        btnlogout = new QPushButton(valikko);
        btnlogout->setObjectName(QString::fromUtf8("btnlogout"));
        btnlogout->setGeometry(QRect(460, 60, 81, 31));
        btnnosto = new QPushButton(valikko);
        btnnosto->setObjectName(QString::fromUtf8("btnnosto"));
        btnnosto->setGeometry(QRect(320, 60, 91, 31));
        labelsaldo = new QLabel(valikko);
        labelsaldo->setObjectName(QString::fromUtf8("labelsaldo"));
        labelsaldo->setGeometry(QRect(40, 70, 61, 21));
        labeltili = new QLabel(valikko);
        labeltili->setObjectName(QString::fromUtf8("labeltili"));
        labeltili->setGeometry(QRect(150, 70, 81, 16));
        labelpro = new QLabel(valikko);
        labelpro->setObjectName(QString::fromUtf8("labelpro"));
        labelpro->setGeometry(QRect(390, 180, 151, 16));

        retranslateUi(valikko);

        QMetaObject::connectSlotsByName(valikko);
    } // setupUi

    void retranslateUi(QWidget *valikko)
    {
        valikko->setWindowTitle(QCoreApplication::translate("valikko", "Form", nullptr));
        btnlogout->setText(QCoreApplication::translate("valikko", "Kirjaudu ulos", nullptr));
        btnnosto->setText(QCoreApplication::translate("valikko", "Nosto", nullptr));
        labelsaldo->setText(QCoreApplication::translate("valikko", "Saldo", nullptr));
        labeltili->setText(QCoreApplication::translate("valikko", "Tilitapahtumat", nullptr));
        labelpro->setText(QCoreApplication::translate("valikko", "Banksimulpro2000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class valikko: public Ui_valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
