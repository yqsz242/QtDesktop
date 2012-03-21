/********************************************************************************
** Form generated from reading UI file 'setdesktop.ui'
**
** Created: Wed Mar 21 16:40:43 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDESKTOP_H
#define UI_SETDESKTOP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetDesktop
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *Browser;

    void setupUi(QDialog *SetDesktop)
    {
        if (SetDesktop->objectName().isEmpty())
            SetDesktop->setObjectName(QString::fromUtf8("SetDesktop"));
        SetDesktop->resize(445, 326);
        buttonBox = new QDialogButtonBox(SetDesktop);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Browser = new QPushButton(SetDesktop);
        Browser->setObjectName(QString::fromUtf8("Browser"));
        Browser->setGeometry(QRect(290, 70, 97, 27));

        retranslateUi(SetDesktop);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetDesktop, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetDesktop, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetDesktop);
    } // setupUi

    void retranslateUi(QDialog *SetDesktop)
    {
        SetDesktop->setWindowTitle(QApplication::translate("SetDesktop", "Dialog", 0, QApplication::UnicodeUTF8));
        Browser->setText(QApplication::translate("SetDesktop", "Browser", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetDesktop: public Ui_SetDesktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDESKTOP_H
