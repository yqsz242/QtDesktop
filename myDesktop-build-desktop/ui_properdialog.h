/********************************************************************************
** Form generated from reading UI file 'properdialog.ui'
**
** Created: Mon May 7 21:57:51 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERDIALOG_H
#define UI_PROPERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_properDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_14;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_17;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QPushButton *pushButton;

    void setupUi(QWidget *properDialog)
    {
        if (properDialog->objectName().isEmpty())
            properDialog->setObjectName(QString::fromUtf8("properDialog"));
        properDialog->resize(534, 415);
        tabWidget = new QTabWidget(properDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 30, 461, 321));
        tabWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 246, 206));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout->addWidget(lineEdit_7);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(61, 30, 301, 201));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_14 = new QLineEdit(layoutWidget1);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        gridLayout->addWidget(lineEdit_14, 1, 1, 1, 1);

        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(22, 32, 45, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(22, 62, 45, 17));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(23, 93, 45, 17));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(73, 32, 45, 22));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(124, 32, 45, 22));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(175, 32, 60, 22));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(125, 93, 45, 22));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(176, 93, 60, 22));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(74, 93, 45, 22));
        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(124, 62, 45, 22));
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(175, 62, 60, 22));
        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(73, 62, 45, 22));

        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(properDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 360, 98, 27));

        retranslateUi(properDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(properDialog);
    } // setupUi

    void retranslateUi(QWidget *properDialog)
    {
        properDialog->setWindowTitle(QApplication::translate("properDialog", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("properDialog", "\346\226\207\344\273\266\345\220\215", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("properDialog", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("properDialog", "\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("properDialog", "\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("properDialog", "\346\234\200\345\220\216\344\277\256\346\224\271\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("properDialog", "\346\234\200\345\220\216\350\256\277\351\227\256\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("properDialog", "\345\237\272\346\234\254", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("properDialog", "\346\211\200\346\234\211\350\200\205", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("properDialog", "\346\211\200\345\234\250\347\273\204", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("properDialog", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("properDialog", "\346\211\200\346\234\211\350\200\205", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("properDialog", "\346\211\200\345\234\250\347\273\204", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("properDialog", "\345\205\266     \344\273\226", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("properDialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("properDialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("properDialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("properDialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("properDialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("properDialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("properDialog", "\345\206\231", 0, QApplication::UnicodeUTF8));
        checkBox_8->setText(QApplication::translate("properDialog", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
        checkBox_9->setText(QApplication::translate("properDialog", "\350\257\273", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("properDialog", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("properDialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class properDialog: public Ui_properDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERDIALOG_H
