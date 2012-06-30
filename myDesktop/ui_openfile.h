/********************************************************************************
** Form generated from reading UI file 'openfile.ui'
**
** Created: Wed Jun 13 17:00:44 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFILE_H
#define UI_OPENFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New_File;
    QAction *action_Quit;
    QAction *actionCut_T;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionRename_R;
    QAction *action_About;
    QAction *action_New_Folder;
    QAction *action_Recoil;
    QAction *action_Onward;
    QAction *action_Up;
    QAction *action_dis;
    QAction *Proper;
    QAction *action_About_Qt;
    QAction *action_D;
    QAction *action_hide;
    QAction *action_nohide;
    QAction *action_terminal;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListView *listView;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar1;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_3;
    QTreeView *treeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(869, 434);
        action_New_File = new QAction(MainWindow);
        action_New_File->setObjectName(QString::fromUtf8("action_New_File"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_File->setIcon(icon);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionCut_T = new QAction(MainWindow);
        actionCut_T->setObjectName(QString::fromUtf8("actionCut_T"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image/cut.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_T->setIcon(icon1);
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QString::fromUtf8("actionCopy_C"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon2);
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName(QString::fromUtf8("actionPaste_P"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_P->setIcon(icon3);
        actionRename_R = new QAction(MainWindow);
        actionRename_R->setObjectName(QString::fromUtf8("actionRename_R"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_New_Folder = new QAction(MainWindow);
        action_New_Folder->setObjectName(QString::fromUtf8("action_New_Folder"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Folder->setIcon(icon4);
        action_Recoil = new QAction(MainWindow);
        action_Recoil->setObjectName(QString::fromUtf8("action_Recoil"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image/recoil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Recoil->setIcon(icon5);
        action_Onward = new QAction(MainWindow);
        action_Onward->setObjectName(QString::fromUtf8("action_Onward"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("image/onward.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Onward->setIcon(icon6);
        action_Up = new QAction(MainWindow);
        action_Up->setObjectName(QString::fromUtf8("action_Up"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("image/up.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Up->setIcon(icon7);
        action_dis = new QAction(MainWindow);
        action_dis->setObjectName(QString::fromUtf8("action_dis"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_dis->setIcon(icon8);
        Proper = new QAction(MainWindow);
        Proper->setObjectName(QString::fromUtf8("Proper"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("image/bookmark-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        Proper->setIcon(icon9);
        action_About_Qt = new QAction(MainWindow);
        action_About_Qt->setObjectName(QString::fromUtf8("action_About_Qt"));
        action_D = new QAction(MainWindow);
        action_D->setObjectName(QString::fromUtf8("action_D"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("image/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_D->setIcon(icon10);
        action_hide = new QAction(MainWindow);
        action_hide->setObjectName(QString::fromUtf8("action_hide"));
        action_nohide = new QAction(MainWindow);
        action_nohide->setObjectName(QString::fromUtf8("action_nohide"));
        action_terminal = new QAction(MainWindow);
        action_terminal->setObjectName(QString::fromUtf8("action_terminal"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listView = new QListView(splitter);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setContextMenuPolicy(Qt::ActionsContextMenu);
        splitter->addWidget(listView);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 869, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar1 = new QToolBar(MainWindow);
        mainToolBar1->setObjectName(QString::fromUtf8("mainToolBar1"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar1);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeView = new QTreeView(dockWidgetContents_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout_3->addWidget(treeView, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New_File);
        menu_File->addAction(action_New_Folder);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Edit->addAction(actionCut_T);
        menu_Edit->addAction(actionCopy_C);
        menu_Edit->addAction(actionPaste_P);
        menu_Edit->addAction(action_D);
        menu_Edit->addAction(actionRename_R);
        menu_Help->addAction(action_About);
        menu_Help->addAction(action_About_Qt);
        mainToolBar->addAction(action_Recoil);
        mainToolBar->addAction(action_Onward);
        mainToolBar->addAction(action_Up);
        mainToolBar->addAction(action_D);
        mainToolBar->addAction(actionCut_T);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_P);
        mainToolBar->addAction(action_dis);
        mainToolBar->addAction(Proper);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_New_File->setText(QApplication::translate("MainWindow", "&New File", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCut_T->setText(QApplication::translate("MainWindow", "Cut(&T)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCut_T->setToolTip(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut_T->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy(&C)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy_C->setToolTip(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste_P->setText(QApplication::translate("MainWindow", "Paste(&P)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPaste_P->setToolTip(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPaste_P->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionRename_R->setText(QApplication::translate("MainWindow", "Rename(&R)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRename_R->setToolTip(QApplication::translate("MainWindow", "Rename", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRename_R->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        action_New_Folder->setText(QApplication::translate("MainWindow", "&New Folder", 0, QApplication::UnicodeUTF8));
        action_Recoil->setText(QApplication::translate("MainWindow", "&Recoil", 0, QApplication::UnicodeUTF8));
        action_Onward->setText(QApplication::translate("MainWindow", "&Onward", 0, QApplication::UnicodeUTF8));
        action_Up->setText(QApplication::translate("MainWindow", "&Up", 0, QApplication::UnicodeUTF8));
        action_Up->setShortcut(QApplication::translate("MainWindow", "Backspace", 0, QApplication::UnicodeUTF8));
        action_dis->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\344\276\247\350\276\271\346\240\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_dis->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\344\276\247\350\276\271\346\240\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Proper->setText(QApplication::translate("MainWindow", "\345\261\236\346\200\247", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Proper->setToolTip(QApplication::translate("MainWindow", "\345\261\236\346\200\247", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_About_Qt->setText(QApplication::translate("MainWindow", "&About Qt", 0, QApplication::UnicodeUTF8));
        action_D->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244(&D)", 0, QApplication::UnicodeUTF8));
        action_D->setShortcut(QApplication::translate("MainWindow", "Shift+Del", 0, QApplication::UnicodeUTF8));
        action_hide->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_hide->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_nohide->setText(QApplication::translate("MainWindow", "\344\270\215\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_nohide->setToolTip(QApplication::translate("MainWindow", "\344\270\215\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_terminal->setText(QApplication::translate("MainWindow", "\345\234\250\347\273\210\347\253\257\344\270\255\346\211\223\345\274\200(&T)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_terminal->setToolTip(QApplication::translate("MainWindow", "\345\234\250\347\273\210\347\253\257\344\270\255\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        mainToolBar1->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFILE_H
