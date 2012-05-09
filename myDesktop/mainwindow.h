#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QtGui>
#include <setdesktop.h>
#include <QProcess>
#include "mylabel.h"
//<<<<<<< HEAD
#include "filesystem.h"
#include "properdialog.h"
#include <QtGui/QToolBar>
#include<QtGui/QWidget>
#include<QtGui/QMenuBar>
#include<QDialog>
//=======
#include "frame.h"

#include "defs.h"

>>>>>>> dc3f3938bc0f68e26edbb20aeccca904bfc32cbe
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
    QAction *paste;
    QAction *desktop;
    QPixmap *background;
    QLabel *barLabel;
    QTimer *readTimer;
//<<<<<<< HEAD
    QPushButton *desk_top;
    QWidget *centralWidget;
    fileSystem *fileS;
//=======
    QVector<Frame*> *procs;
    QVector<QLabel*> *proc_bars;
//>>>>>>> dc3f3938bc0f68e26edbb20aeccca904bfc32cbe
};

#endif
