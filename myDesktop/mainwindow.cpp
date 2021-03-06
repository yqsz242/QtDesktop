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
    background = new QPixmap("/home/saubao/Desktop/share/QtDesktop/myDesktop/image/01.jpg");
    QImage *asd = new QImage("/home/saubao/Desktop/share/QtDesktop/myDesktop/image/01.jpg");
    palette.setBrush(((QMainWindow*)this)->backgroundRole(), QBrush(*asd));
    ((QMainWindow*)this)->setPalette(palette);

    //<<<<<<< HEAD
        //this->addDockWidget();
        centralWidget=new QWidget(this);
         /*desk_top=new QPushButton(centralWidget);
            desk_top->setText(QString::fromUtf8("我的电脑"));
            desk_top->setGeometry(QRect(10, 0, 121, 81));
            task=new QPushButton(centralWidget);
            task->setText(QString::fromUtf8("任务管理器"));
            task->setGeometry(QRect(122, 0, 121, 81));*/
            desk_top_acon=new QLabel(centralWidget);
            desk_top_acon->setGeometry(QRect(2,0,80,70));
            desk_top_acon->setPixmap(QPixmap("/home/saubao/Desktop/share/QtDesktop/myDesktop/image/desktop.png"));
            desk_top_acon->setScaledContents(true);
            desk_top_acon->installEventFilter(this);
            desk_text=new QLabel(centralWidget);
            desk_text->setText(QString::fromUtf8("我的电脑"));
            desk_text->setGeometry(QRect(10,70,60,50));
            this->setCentralWidget(centralWidget);
            fileS=new fileSystem();
            //fileS->setObjectName();
        //connect(this->desk_top,SIGNAL(clicked()),this,SLOT(showFileDialog()));
        connect(this->desk_text,SIGNAL(clicked()),this,SLOT(showFileDialog()));
    //=======

    procs = new QVector<Frame*>();
    proc_bars = new QVector<QLabel*>();

    createActions();
    createMenus();
    createBar();
    menu_task->installEventFilter(this);
    connect(this->menu_task,SIGNAL(clicked()),this,SLOT(showFileDialog()));

    this->installEventFilter(this);
    mov=1;

    this->setFocus();
}

void MainWindow::showTask()
{
    char env[50];
    strcpy(env,"ProcessManagement");
    qDebug("env=%s",env);
    char name[50];
    QString string=tr("./")+env;
    strcpy(name,string.toUtf8());
    qDebug("name=%s",name);
    int pid;
    if((pid=fork())==0)
    {
        execl(env,name,NULL);
        return;
    }
}

void MainWindow::showFileDialog()
{

    fileS->show();
    qDebug("adsfas");
}

void MainWindow::createBar(){
    barLabel = new QLabel;
    barLabel->setMinimumSize(barLabel->sizeHint());
    barLabel->setAlignment(Qt::AlignHCenter);
    TT = new QAction(this);
    TT->setObjectName(QString::fromUtf8("action_Recoil"));
    QIcon icon;
    icon.addFile(QString::fromUtf8("/home/saubao/Desktop/share/QtDesktop/myDesktop/image/recoil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
    TT->setIcon(icon);
    QDateTime time = QDateTime::currentDateTime();
    barLabel->setText(time.toString("HH:mm:ss  "));
    statusBar()->setStyleSheet(QString("QStatusBar::item{border: 0px}"));
    statusBar()->addPermanentWidget(barLabel);
    statusBar()->addAction(TT);
    statusBar()->setMinimumHeight(25);
    statusBar()->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Active, QPalette::Background, QColor(212,208,200));
    statusBar()->setPalette(palette);
    //statusBar()->addWidget(barLabel);
    barLabel->installEventFilter(this);
    statusBar()->installEventFilter(this);
    readTimer = new QTimer(this);   //创建并启动定时器
    connect(readTimer, SIGNAL(timeout()), this, SLOT(flashTime()));
       //每当定时器超时时调用函数slotReadFile读取文件
    readTimer->start(100);
}

void MainWindow::createActions() {
    Gvim = new QAction(tr("&Xterm"),this);
    Gvim->setStatusTip(tr("xterm"));
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
    //start
    QIcon icon ;
    icon.addFile(QString::fromUtf8("/home/saubao/Desktop/share/QtDesktop/myDesktop/image/desktop.png"),QSize(),QIcon::Normal,QIcon::Off);
    openFile=new QAction(tr("local file system"),this);
    desktop->setStatusTip(tr("open local file system"));
    openFile->setIcon(icon);
    //end
}

void MainWindow::createMenus() {
    // menuBar()第一次被调用时QMainWindow会生一个一QMenuBar在窗体上,
    // 且返回一个QMenu的指针.
    // menuBar()->addMenu()会生成一个QMenu且返回他的指针.
    // QMenu加入一个QAction, 就可以对事件进行反应了
    // 一个QAction可以被多个地方使用, 与Java的Action一样.
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(Gvim);
    fileMenu->addAction(openFile);
    fileMenu->addSeparator();
    fileMenu->addAction(shutdown);
    fileMenu->addSeparator();
    fileMenu->addAction(exit);
    menu_task=new QMenu(menuBar());
    menu_task->setTitle(QString::fromUtf8("任务管理器"));
    menuBar()->addMenu(menu_task);
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

void MainWindow::flashTime(){
    readTimer->stop();
    QDateTime time = QDateTime::currentDateTime();
    barLabel->setText(time.toString("HH:mm:ss  "));
    readTimer->start(1);    //重新启动定时器
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == desk_top_acon) {

            if (event->type() == QEvent::MouseButtonDblClick) {
                this->showFileDialog();

                 //  QMessageBox::information(NULL, QString::fromLocal8Bit("单击"), QString::fromLocal8Bit("单击确定"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

                 return true;

             } else {

                 return false;

             }

         }
        if (obj == menu_task) {

            if (event->type() == QEvent::MouseButtonPress) {
                this->showTask();

                 //  QMessageBox::information(NULL, QString::fromLocal8Bit("单击"), QString::fromLocal8Bit("单击确定"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

                 return true;

             } else {

                 return false;

             }

         }

    QVector<Frame*>::iterator it1 = procs->begin();
    for(QVector<QLabel*>::iterator it2 = proc_bars->begin();it2!=proc_bars->end();it2++)
    {
        if(obj == (*it2))
        {
            if (event->type() == QEvent::MouseButtonPress)
            {
                (*it1)->active();
                topFrame = (*it1);
                return true;
            }
            break;
        }
        it1++;
    }
    if (obj == barLabel) {
        if (event->type() == QEvent::MouseButtonDblClick) { //随便判断什么事件都可以了
            QMessageBox::information(NULL, QString::fromLocal8Bit("time"), QString::fromLocal8Bit(barLabel->text().toLocal8Bit()), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            return true;
        } else {
            return false;
        }
    } else if(obj == statusBar()){
        if (event->type() == QEvent::MouseButtonDblClick) { //随便判断什么事件都可以了
            cout<<obj<<' '<<statusBar()<<endl;
            QMessageBox::information(NULL, QString::fromLocal8Bit("bar"), QString::fromLocal8Bit("This is a bar"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            return true;
        } else {
            return false;
        }
    }else{
        // pass the event on to the parent class
        return QMainWindow::eventFilter(obj, event);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
        case Qt::Key_Left:
            cout<<"1"<<endl;
            if(topFrame){
                topFrame->set_sizeAndpos(0,25,QApplication::desktop()->width()/2,QApplication::desktop()->height()-50);
            }
            break;
        case Qt::Key_Right:
            cout<<"1"<<endl;
            if(topFrame){
                topFrame->set_sizeAndpos(QApplication::desktop()->width()/2,25,QApplication::desktop()->width()/2,QApplication::desktop()->height()-50);
            }
            break;
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *e)
{
    switch(e->key())
    {
        case Qt::Key_Meta:
            if(mov == 1)
                ;
            mov = 0;
            break;
    }
}

void MainWindow::activeFrame(QMouseEvent *e,Frame *f)
{
    topFrame = f;
    cout <<"hello"<<endl;
    this->setFocus();
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
    Frame *myFrame = new Frame("xterm",this);
    myFrame->show();
    topFrame = myFrame;
    connect(myFrame,SIGNAL(pressFrame(QMouseEvent*,Frame*)),this,SLOT(activeFrame(QMouseEvent*,Frame*)));
    connect(myFrame,SIGNAL(close_close(Frame *)),this,SLOT(closeFrame(Frame *)));
    procs->push_back(myFrame);
    QLabel* pbar = new QLabel;
    pbar->setFixedSize(50,23);
    proc_bars->push_back(pbar);
    pbar->setAutoFillBackground (true);
    QPalette palette;
    palette.setColor(QPalette::Active, QPalette::Background, QColor(64,64,64));
    pbar->setPalette(palette);
    pbar->installEventFilter(this);
    statusBar()->addPermanentWidget(pbar);
}


void MainWindow::closeFrame(Frame *f){
    QVector<Frame*>::iterator it1 = procs->begin();
    for(QVector<QLabel*>::iterator it2 = proc_bars->begin();it2!=proc_bars->end();it2++)
    {
        if(f == (*it1))
        {
            procs->erase(it1);
            ((QLabel*)(*it2))->setVisible(false);
            proc_bars->erase(it2);
            break;
        }
        it1++;
    }
}

//void MainWindow::active(){
    //barLabel = new QLabel;
//}
