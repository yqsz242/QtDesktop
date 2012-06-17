/********************************************************************************
** Form generated from reading UI file 'filesystem.ui'
**
** Created: Wed Jun 13 21:03:51 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESYSTEM_H
#define UI_FILESYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileSystem
{
public:
    QAction *action_Recoil;
    QAction *action_Onward;
    QAction *action_Up;
    QAction *actionPaste_P;
    QAction *action_D;
    QAction *actionCut_T;
    QAction *actionCopy_C;
    QAction *action_dis;
    QAction *action_New_File;
    QAction *action_New_Folder;
    QAction *action_Quit;
    QAction *actionRename_R;
    QAction *Proper;
    QAction *action_hide;
    QAction *action_nohide;
    QAction *action;
    QAction *action_terminal;
    QAction *action_About;
    QAction *action_About_Qt;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QSplitter *splitter;
    QListView *listView;
    QTableView *tableView;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QToolBar *mainToolBar1;
    QMenuBar *mainMenBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_Help;

    void setupUi(QMainWindow *fileSystem)
    {
        if (fileSystem->objectName().isEmpty())
            fileSystem->setObjectName(QString::fromUtf8("fileSystem"));
        fileSystem->resize(800, 477);
        action_Recoil = new QAction(fileSystem);
        action_Recoil->setObjectName(QString::fromUtf8("action_Recoil"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/recoil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Recoil->setIcon(icon);
        action_Onward = new QAction(fileSystem);
        action_Onward->setObjectName(QString::fromUtf8("action_Onward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image/onward.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Onward->setIcon(icon1);
        action_Up = new QAction(fileSystem);
        action_Up->setObjectName(QString::fromUtf8("action_Up"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image/up.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_Up->setIcon(icon2);
        actionPaste_P = new QAction(fileSystem);
        actionPaste_P->setObjectName(QString::fromUtf8("actionPaste_P"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_P->setIcon(icon3);
        action_D = new QAction(fileSystem);
        action_D->setObjectName(QString::fromUtf8("action_D"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("image/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_D->setIcon(icon4);
        actionCut_T = new QAction(fileSystem);
        actionCut_T->setObjectName(QString::fromUtf8("actionCut_T"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image/cut.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_T->setIcon(icon5);
        actionCopy_C = new QAction(fileSystem);
        actionCopy_C->setObjectName(QString::fromUtf8("actionCopy_C"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("image/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon6);
        action_dis = new QAction(fileSystem);
        action_dis->setObjectName(QString::fromUtf8("action_dis"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_dis->setIcon(icon7);
        action_New_File = new QAction(fileSystem);
        action_New_File->setObjectName(QString::fromUtf8("action_New_File"));
        action_New_Folder = new QAction(fileSystem);
        action_New_Folder->setObjectName(QString::fromUtf8("action_New_Folder"));
        action_Quit = new QAction(fileSystem);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionRename_R = new QAction(fileSystem);
        actionRename_R->setObjectName(QString::fromUtf8("actionRename_R"));
        Proper = new QAction(fileSystem);
        Proper->setObjectName(QString::fromUtf8("Proper"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("image/bookmark-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        Proper->setIcon(icon8);
        action_hide = new QAction(fileSystem);
        action_hide->setObjectName(QString::fromUtf8("action_hide"));
        action_nohide = new QAction(fileSystem);
        action_nohide->setObjectName(QString::fromUtf8("action_nohide"));
        action = new QAction(fileSystem);
        action->setObjectName(QString::fromUtf8("action"));
        action_terminal = new QAction(fileSystem);
        action_terminal->setObjectName(QString::fromUtf8("action_terminal"));
        action_About = new QAction(fileSystem);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_About_Qt = new QAction(fileSystem);
        action_About_Qt->setObjectName(QString::fromUtf8("action_About_Qt"));
        centralwidget = new QWidget(fileSystem);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dockWidget_2 = new QDockWidget(centralwidget);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setEnabled(true);
        dockWidget_2->setMouseTracking(true);
        dockWidget_2->setAcceptDrops(false);
        dockWidget_2->setFloating(false);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidgetContents_2->setEnabled(true);
        dockWidgetContents_2->setAcceptDrops(false);
        dockWidgetContents_2->setLayoutDirection(Qt::LeftToRight);
        dockWidgetContents_2->setAutoFillBackground(false);
        gridLayout = new QGridLayout(dockWidgetContents_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(dockWidgetContents_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_2);

        horizontalLayout->addWidget(dockWidget_2);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listView = new QListView(splitter);
        listView->setObjectName(QString::fromUtf8("listView"));
        splitter->addWidget(listView);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);

        horizontalLayout->addWidget(splitter);

        fileSystem->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(fileSystem);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        fileSystem->setStatusBar(statusBar);
        mainToolBar = new QToolBar(fileSystem);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        fileSystem->addToolBar(Qt::TopToolBarArea, mainToolBar);
        mainToolBar1 = new QToolBar(fileSystem);
        mainToolBar1->setObjectName(QString::fromUtf8("mainToolBar1"));
        fileSystem->addToolBar(Qt::TopToolBarArea, mainToolBar1);
        mainMenBar = new QMenuBar(fileSystem);
        mainMenBar->setObjectName(QString::fromUtf8("mainMenBar"));
        mainMenBar->setGeometry(QRect(0, 0, 800, 25));
        menu_File = new QMenu(mainMenBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(mainMenBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Help = new QMenu(mainMenBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        fileSystem->setMenuBar(mainMenBar);

        mainToolBar->addAction(action_Recoil);
        mainToolBar->addAction(action_Onward);
        mainToolBar->addAction(action_Up);
        mainToolBar->addAction(action_D);
        mainToolBar->addAction(actionCut_T);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_P);
        mainToolBar->addAction(action_dis);
        mainToolBar->addAction(Proper);
        mainMenBar->addAction(menu_File->menuAction());
        mainMenBar->addAction(menu_Edit->menuAction());
        mainMenBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New_File);
        menu_File->addAction(action_New_Folder);
        menu_File->addAction(action_Quit);
        menu_Edit->addAction(actionRename_R);
        menu_Help->addAction(action_About);
        menu_Help->addAction(action_About_Qt);

        retranslateUi(fileSystem);

        QMetaObject::connectSlotsByName(fileSystem);
    } // setupUi

    void retranslateUi(QMainWindow *fileSystem)
    {
        fileSystem->setWindowTitle(QApplication::translate("fileSystem", "\346\210\221\347\232\204\347\224\265\350\204\221", 0, QApplication::UnicodeUTF8));
        action_Recoil->setText(QApplication::translate("fileSystem", "\345\220\216\351\200\200", 0, QApplication::UnicodeUTF8));
        action_Onward->setText(QApplication::translate("fileSystem", "\345\220\221\345\211\215", 0, QApplication::UnicodeUTF8));
        action_Up->setText(QApplication::translate("fileSystem", "\345\220\221\344\270\212", 0, QApplication::UnicodeUTF8));
        actionPaste_P->setText(QApplication::translate("fileSystem", "\347\262\230\350\264\264", 0, QApplication::UnicodeUTF8));
        actionPaste_P->setShortcut(QApplication::translate("fileSystem", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        action_D->setText(QApplication::translate("fileSystem", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        actionCut_T->setText(QApplication::translate("fileSystem", "\345\211\252\345\210\207", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCut_T->setToolTip(QApplication::translate("fileSystem", "\345\211\252\345\210\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut_T->setShortcut(QApplication::translate("fileSystem", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy_C->setText(QApplication::translate("fileSystem", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy_C->setToolTip(QApplication::translate("fileSystem", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy_C->setShortcut(QApplication::translate("fileSystem", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        action_dis->setText(QApplication::translate("fileSystem", "agafds", 0, QApplication::UnicodeUTF8));
        action_New_File->setText(QApplication::translate("fileSystem", "New File", 0, QApplication::UnicodeUTF8));
        action_New_Folder->setText(QApplication::translate("fileSystem", "&New Folder", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("fileSystem", "&Quit", 0, QApplication::UnicodeUTF8));
        actionRename_R->setText(QApplication::translate("fileSystem", "&Rename(R)", 0, QApplication::UnicodeUTF8));
        Proper->setText(QApplication::translate("fileSystem", "\345\261\236\346\200\247", 0, QApplication::UnicodeUTF8));
        action_hide->setText(QApplication::translate("fileSystem", "\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        action_nohide->setText(QApplication::translate("fileSystem", "\344\270\215\346\230\276\347\244\272\351\232\220\350\227\217\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("fileSystem", "\345\234\250\347\273\210\347\253\257\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        action_terminal->setText(QApplication::translate("fileSystem", "\345\234\250\347\273\210\347\253\257\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("fileSystem", "About", 0, QApplication::UnicodeUTF8));
        action_About_Qt->setText(QApplication::translate("fileSystem", "About Qt", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("fileSystem", "toolBar", 0, QApplication::UnicodeUTF8));
        mainToolBar1->setWindowTitle(QApplication::translate("fileSystem", "toolBar", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("fileSystem", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("fileSystem", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("fileSystem", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fileSystem: public Ui_fileSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESYSTEM_H
