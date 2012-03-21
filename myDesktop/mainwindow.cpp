#include <QApplication>
#include <QLabel>
#include <QDesktopWidget>


#include "mainwindow.h"

MainWindow::MainWindow()
{
    //int width = QApplication::desktop()->width();
    //int height = QApplication::desktop()->height();
    ((QMainWindow*)this)->showFullScreen();
    QPalette palette;
    background = new QPixmap("image/01.jpg");
    palette.setBrush(((QMainWindow*)this)->backgroundRole(), QBrush(*background));
    ((QMainWindow*)this)->setPalette(palette);

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
    copy = new QAction(tr("&Copy"),this);
    copy->setStatusTip(tr("Copy"));
    connect(copy,SIGNAL(triggered()),this,SLOT(Copy()));
    paste = new QAction(tr("&Paste"),this);
    paste->setStatusTip(tr("Paste"));
    connect(paste,SIGNAL(triggered()),this,SLOT(Paste()));
    cut = new QAction(tr("&Cut"),this);
    cut->setStatusTip(tr("Cut"));
    connect(cut,SIGNAL(triggered()),this,SLOT(Cut()));
    desktop = new QAction(tr("&Desktop"),this);
    desktop->setStatusTip(tr("Set your desktop"));
    connect(desktop,SIGNAL(triggered()),this,SLOT(Desktop()));
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

void MainWindow::mousePressEvent ( QMouseEvent * e )//鼠标单击事件响应
{
   QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
   if(e->button()==Qt::LeftButton){
      //label=new QLabel("Mouse Left Button Pressed:"+str);//显示临时信息
      //label->show();
   }
   else if(e->button()==Qt::RightButton){
      //label=new QLabel("Mouse Right Button Pressed:"+str);
      //label->show();

      QMenu *popMenu =new QMenu(this);//定义一个右键弹出菜单

      popMenu->addAction(copy);//往菜单内添加QAction   该action在前面用设计器定义了
      popMenu->addAction(paste);
      popMenu->addAction(cut);
      popMenu->addAction(desktop);
      popMenu->exec(QCursor::pos());//弹出右键菜单，菜单位置为光标位置
   }
}


void MainWindow::Copy(){

}

void MainWindow::Cut(){

}

void MainWindow::Paste(){

}

void MainWindow::Desktop(){
    SetDesktop *set = new SetDesktop(this,this);
    set->show();
    set->raise();
    set->activateWindow();
}

void MainWindow::setDesktop(QPixmap *a){
    background = a;
    QPalette palette;
    palette.setBrush(((QMainWindow*)this)->backgroundRole(), QBrush(*background));
    ((QMainWindow*)this)->setPalette(palette);
}

void MainWindow::shutDown(){
    system("sudo shutdown now -h\n");
}

void MainWindow::Exit(){

}

void MainWindow::gvim(){
    system("gvim\n");
}
