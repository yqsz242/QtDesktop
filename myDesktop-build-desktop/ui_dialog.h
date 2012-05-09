/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Mon May 7 13:01:22 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *fileowner;
    QLabel *label_8;
    QLineEdit *filegroup;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *ownerread;
    QCheckBox *ownerwrite;
    QCheckBox *ownerexec;
    QCheckBox *grpread;
    QCheckBox *grpexec;
    QCheckBox *grpwrite;
    QCheckBox *otherread;
    QCheckBox *otherexec;
    QCheckBox *otherwrite;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 417);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 401, 371));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 301, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\351\274\216PL\347\273\206\344\270\212\346\265\267\345\256\213Uni"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_6);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_6->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_5);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 20, 331, 251));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        fileowner = new QLineEdit(layoutWidget1);
        fileowner->setObjectName(QString::fromUtf8("fileowner"));
        fileowner->setReadOnly(true);

        gridLayout_2->addWidget(fileowner, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        filegroup = new QLineEdit(layoutWidget1);
        filegroup->setObjectName(QString::fromUtf8("filegroup"));
        filegroup->setReadOnly(true);

        gridLayout_2->addWidget(filegroup, 1, 1, 1, 1);

        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 30, 57, 21));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 70, 57, 18));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 110, 51, 18));
        ownerread = new QCheckBox(groupBox);
        ownerread->setObjectName(QString::fromUtf8("ownerread"));
        ownerread->setGeometry(QRect(90, 30, 41, 22));
        ownerwrite = new QCheckBox(groupBox);
        ownerwrite->setObjectName(QString::fromUtf8("ownerwrite"));
        ownerwrite->setGeometry(QRect(160, 30, 41, 22));
        ownerexec = new QCheckBox(groupBox);
        ownerexec->setObjectName(QString::fromUtf8("ownerexec"));
        ownerexec->setGeometry(QRect(240, 30, 61, 22));
        grpread = new QCheckBox(groupBox);
        grpread->setObjectName(QString::fromUtf8("grpread"));
        grpread->setGeometry(QRect(90, 70, 41, 22));
        grpexec = new QCheckBox(groupBox);
        grpexec->setObjectName(QString::fromUtf8("grpexec"));
        grpexec->setGeometry(QRect(240, 70, 61, 22));
        grpwrite = new QCheckBox(groupBox);
        grpwrite->setObjectName(QString::fromUtf8("grpwrite"));
        grpwrite->setGeometry(QRect(160, 70, 41, 22));
        otherread = new QCheckBox(groupBox);
        otherread->setObjectName(QString::fromUtf8("otherread"));
        otherread->setGeometry(QRect(90, 110, 41, 22));
        otherexec = new QCheckBox(groupBox);
        otherexec->setObjectName(QString::fromUtf8("otherexec"));
        otherexec->setGeometry(QRect(240, 110, 61, 22));
        otherwrite = new QCheckBox(groupBox);
        otherwrite->setObjectName(QString::fromUtf8("otherwrite"));
        otherwrite->setGeometry(QRect(160, 110, 41, 22));

        gridLayout_2->addWidget(groupBox, 2, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 380, 85, 27));

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\346\226\207\344\273\266\345\220\215:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\345\244\247\345\260\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\344\275\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\346\234\200\345\220\216\344\277\256\346\224\271\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\346\234\200\345\220\216\350\256\277\351\227\256\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "\345\237\272\346\234\254", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\346\211\200\346\234\211\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\346\211\200\345\234\250\347\273\204\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "\346\211\200\346\234\211\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "\346\211\200\345\234\250\347\273\204\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "\345\205\266 \344\273\226\357\274\232", 0, QApplication::UnicodeUTF8));
        ownerread->setText(QApplication::translate("Dialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        ownerwrite->setText(QApplication::translate("Dialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        ownerexec->setText(QApplication::translate("Dialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        grpread->setText(QApplication::translate("Dialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        grpexec->setText(QApplication::translate("Dialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        grpwrite->setText(QApplication::translate("Dialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        otherread->setText(QApplication::translate("Dialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        otherexec->setText(QApplication::translate("Dialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        otherwrite->setText(QApplication::translate("Dialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
