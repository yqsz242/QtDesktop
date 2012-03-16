#include <QApplication>
#include <QLabel>
#include <QDesktopWidget>


#include "mainwindow.h"

MainWindow::MainWindow()
{
    //int width = QApplication::desktop()->width();
    //int height = QApplication::desktop()->height();
    ((QMainWindow*)this)->showFullScreen();
    createActions();
    createMenus();
}

void MainWindow::createActions() {
    Gvim = new QAction(tr("&Gvim"),this);
    Gvim->setStatusTip(tr("Gvim"));
    connect(Gvim,SIGNAL(triggered()),this,SLOT(gvim()));
    shutdown = new QAction(tr("&shutdown"),this);
    shutdown->setStatusTip(tr("shut down"));
    connect(shutdown,SIGNAL(triggered()),this,SLOT(shutDown()));
    exit = new QAction(tr("&exit"),this);
    exit->setStatusTip(tr("exit"));
    connect(exit,SIGNAL(triggered()),this,SLOT(close()));
}

void MainWindow::createMenus() {
    // menuBar()第一次被调用时QMainWindow会生一个一QMenuBar在窗体上,
    // 且返回一个QMenu的指针.
    // menuBar()->addMenu()会生成一个QMenu且返回他的指针.
    // QMenu加入一个QAction, 就可以对事件进行反应了
    // 一个QAction可以被多个地方使用, 与Java的Action一样.
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(Gvim);
    fileMenu->addSeparator();
    fileMenu->addAction(shutdown);
    fileMenu->addSeparator();
    fileMenu->addAction(exit);
}


void MainWindow::shutDown(){
    system("sudo shutdown now -h\n");
}

void MainWindow::Exit(){

}

void MainWindow::gvim(){
    system("gvim\n");
}
