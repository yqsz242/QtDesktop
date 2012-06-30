/********************************************************************************
** Form generated from reading UI file 'proper.ui'
**
** Created: Wed Jun 13 17:00:44 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPER_H
#define UI_PROPER_H

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

class Ui_proper
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLineEdit *lineEdit_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QLineEdit *lineEdit_17;
    QWidget *tab_4;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_18;
    QLineEdit *fileowner;
    QLabel *label_19;
    QLineEdit *filegroup;
    QGroupBox *groupBox_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
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

    void setupUi(QDialog *proper)
    {
        if (proper->objectName().isEmpty())
            proper->setObjectName(QString::fromUtf8("proper"));
        proper->resize(663, 462);
        tabWidget = new QTabWidget(proper);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 471, 371));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget_3 = new QWidget(tab_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(40, 10, 301, 301));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\351\274\216PL\347\273\206\344\270\212\346\265\267\345\256\213Uni"));
        font.setPointSize(12);
        label_6->setFont(font);

        horizontalLayout_7->addWidget(label_6);

        lineEdit_10 = new QLineEdit(layoutWidget_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_10);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_8->addWidget(label_12);

        lineEdit_12 = new QLineEdit(layoutWidget_3);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_12);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_9->addWidget(label_13);

        lineEdit_13 = new QLineEdit(layoutWidget_3);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_13);


        gridLayout_3->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_10->addWidget(label_14);

        lineEdit_15 = new QLineEdit(layoutWidget_3);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_15);


        gridLayout_3->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_11->addWidget(label_15);

        lineEdit_16 = new QLineEdit(layoutWidget_3);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_16);


        gridLayout_3->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        horizontalLayout_12->addWidget(label_16);

        lineEdit_17 = new QLineEdit(layoutWidget_3);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_17);


        gridLayout_3->addLayout(horizontalLayout_12, 5, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        layoutWidget_4 = new QWidget(tab_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(40, 20, 331, 251));
        gridLayout_4 = new QGridLayout(layoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        fileowner = new QLineEdit(layoutWidget_4);
        fileowner->setObjectName(QString::fromUtf8("fileowner"));
        fileowner->setReadOnly(true);

        gridLayout_4->addWidget(fileowner, 0, 1, 1, 1);

        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);

        filegroup = new QLineEdit(layoutWidget_4);
        filegroup->setObjectName(QString::fromUtf8("filegroup"));
        filegroup->setReadOnly(true);

        gridLayout_4->addWidget(filegroup, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 30, 57, 21));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 70, 57, 18));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 110, 51, 18));
        ownerread = new QCheckBox(groupBox_2);
        ownerread->setObjectName(QString::fromUtf8("ownerread"));
        ownerread->setGeometry(QRect(90, 30, 41, 22));
        ownerwrite = new QCheckBox(groupBox_2);
        ownerwrite->setObjectName(QString::fromUtf8("ownerwrite"));
        ownerwrite->setGeometry(QRect(160, 30, 41, 22));
        ownerexec = new QCheckBox(groupBox_2);
        ownerexec->setObjectName(QString::fromUtf8("ownerexec"));
        ownerexec->setGeometry(QRect(240, 30, 61, 22));
        grpread = new QCheckBox(groupBox_2);
        grpread->setObjectName(QString::fromUtf8("grpread"));
        grpread->setGeometry(QRect(90, 70, 41, 22));
        grpexec = new QCheckBox(groupBox_2);
        grpexec->setObjectName(QString::fromUtf8("grpexec"));
        grpexec->setGeometry(QRect(240, 70, 61, 22));
        grpwrite = new QCheckBox(groupBox_2);
        grpwrite->setObjectName(QString::fromUtf8("grpwrite"));
        grpwrite->setGeometry(QRect(160, 70, 41, 22));
        otherread = new QCheckBox(groupBox_2);
        otherread->setObjectName(QString::fromUtf8("otherread"));
        otherread->setGeometry(QRect(90, 110, 41, 22));
        otherexec = new QCheckBox(groupBox_2);
        otherexec->setObjectName(QString::fromUtf8("otherexec"));
        otherexec->setGeometry(QRect(240, 110, 61, 22));
        otherwrite = new QCheckBox(groupBox_2);
        otherwrite->setObjectName(QString::fromUtf8("otherwrite"));
        otherwrite->setGeometry(QRect(160, 110, 41, 22));

        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 2);

        tabWidget->addTab(tab_4, QString());
        pushButton = new QPushButton(proper);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 400, 85, 27));

        retranslateUi(proper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(proper);
    } // setupUi

    void retranslateUi(QDialog *proper)
    {
        proper->setWindowTitle(QApplication::translate("proper", "Dialog", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("proper", "\346\226\207\344\273\266\345\220\215:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("proper", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("proper", "\345\244\247\345\260\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("proper", "\344\275\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("proper", "\346\234\200\345\220\216\344\277\256\346\224\271\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("proper", "\346\234\200\345\220\216\350\256\277\351\227\256\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("proper", "\345\237\272\346\234\254", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("proper", "\346\211\200\346\234\211\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("proper", "\346\211\200\345\234\250\347\273\204\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("proper", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("proper", "\346\211\200\346\234\211\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("proper", "\346\211\200\345\234\250\347\273\204\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("proper", "\345\205\266 \344\273\226\357\274\232", 0, QApplication::UnicodeUTF8));
        ownerread->setText(QApplication::translate("proper", "\350\257\273", 0, QApplication::UnicodeUTF8));
        ownerwrite->setText(QApplication::translate("proper", "\345\206\231", 0, QApplication::UnicodeUTF8));
        ownerexec->setText(QApplication::translate("proper", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        grpread->setText(QApplication::translate("proper", "\350\257\273", 0, QApplication::UnicodeUTF8));
        grpexec->setText(QApplication::translate("proper", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        grpwrite->setText(QApplication::translate("proper", "\345\206\231", 0, QApplication::UnicodeUTF8));
        otherread->setText(QApplication::translate("proper", "\350\257\273", 0, QApplication::UnicodeUTF8));
        otherexec->setText(QApplication::translate("proper", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        otherwrite->setText(QApplication::translate("proper", "\345\206\231", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("proper", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("proper", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class proper: public Ui_proper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPER_H
