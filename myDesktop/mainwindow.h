#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "defs.h"
//#include <QtGui>
#include <setdesktop.h>
#include <QProcess>
#include "mylabel.h"
#include "frame.h"

//<<<<<<< HEAD
#include "filesystem.h"
#include <QtGui/QToolBar>
#include<QtGui/QWidget>
#include<QtGui/QMenuBar>
#include<QDialog>
//=======


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
    void activeFrame(QMouseEvent *,Frame *);
    //start
    void showFileDialog();
    void showTask();

    void closeFrame(Frame *f);

protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);

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
    QAction *cut;
    QAction *TT;
    QAction *paste;
    QAction *desktop;
    QPixmap *background;
    QLabel *barLabel;
    QTimer *readTimer;
    QVector<Frame*> *procs;
    QVector<QLabel*> *proc_bars;
    int mov;
    Frame* topFrame;

    //<<<<<<< HEAD
    QPushButton *task;
    QLabel *desk_top_acon;
    QLabel *desk_text;
    QToolButton *a;
    QMenu *menu_task;
    QStatusBar *statusbar;
    QAction *openFile;
    QPushButton *desk_top;
    QWidget *centralWidget;
    fileSystem *fileS;
    //=======
};

#endif
