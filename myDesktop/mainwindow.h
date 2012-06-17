#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QKeyEvent>
#include <setdesktop.h>
#include <QProcess>
#include "mylabel.h"
#include "filesystem.h"
#include "properdialog.h"
#include <QtGui/QToolBar>
#include<QtGui/QWidget>
#include<QtGui/QMenuBar>
#include<QDialog>
class QAction;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    void setDesktop(QPixmap *a);

private slots:
    void shutDown();
    void Exit();
    void gvim();
    void Copy();
    void Cut();
    void Paste();
    void Desktop();
    void flashTime();
    void showFileDialog();
    void showTask();
protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    void createMenus();
    void createActions();
    void createBar();
    void mousePressEvent ( QMouseEvent * e );

    QMenu *fileMenu;
    QAction *newAction;
    QAction *Gvim;
    QAction *shutdown;
    QAction *exit;
    QLabel *label;
    QAction *copy;
    QAction *openFile;
    QAction *cut;
    QAction *TT;
    QAction *paste;
    QAction *desktop;
    QPixmap *background;
    QLabel *barLabel;
    QTimer *readTimer;
    QPushButton *desk_top;
    QPushButton *task;
    QLabel *desk_top_acon;
    QLabel *desk_text;
    QToolButton *a;
    QMenu *menu_task;
    QStatusBar *statusbar;
    QWidget *centralWidget;
    fileSystem *fileS;
};

#endif
