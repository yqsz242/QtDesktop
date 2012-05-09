#include "mainwindow.h"
#include "ui_openfile.h"
#include<stdio.h>
#include<unistd.h>
#include<string.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  ui->action_D->setEnabled(false);
    pos=0;
    attrDialog=new AttrDialog(this);
    QStringList filter;
    dirModel=new QDirModel(filter,QDir::Dirs|QDir::NoDotAndDotDot,QDir::DirsFirst|QDir::Name|QDir::Type);    
    listModel=new TableModel(0,5);
    button=new QPushButton(tr("确定"));
    button->setDefault(true);
    ui->treeView->setModel(dirModel);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);
    lineEdit=new QLineEdit;   
    label=new QLabel(tr("转到："));
    ui->tableView->setModel(listModel);\
    comboBox=new QComboBox();    
    ui->mainToolBar1->addWidget(this->label);
    ui->mainToolBar1->addWidget(lineEdit);
    ui->mainToolBar1->addWidget(this->button);
    ui->mainToolBar1->addWidget(comboBox);
    comboBox->addItem(tr("以图标方式显示"));
    comboBox->addItem(tr("以列表方式显示"));
    comboBox->addItem(tr("以详细信息方式显示"));
    //ui->listView->setModel(dirModel1);
    ui->listView->setViewMode(QListView::IconMode);
    QSize size(50,50);
    ui->listView->setIconSize(size);
    QSize size1(80,80);
    ui->listView->setGridSize(size1);
    ui->listView->setSpacing(10);
    ui->listView->setResizeMode(QListView::Adjust);
    ui->listView->setWordWrap(false);
    ui->listView->setTextElideMode(Qt::ElideMiddle);        
    ui->tableView->hide();

    comboBox->setCurrentIndex(0);
    label1=new QLabel;
    ui->statusBar->addWidget(label1);
    //ui->listView->addAction(ui->actionAll_A);
    ui->listView->addAction(ui->action_New_File);
    ui->listView->addAction(ui->action_New_Folder);
    ui->listView->addAction(ui->action_D);
    ui->listView->addAction(ui->actionCopy_C);
    ui->listView->addAction(ui->actionCut_T);
    ui->listView->addAction(ui->actionPaste_P);
    ui->listView->addAction(ui->actionRename_R);
    ui->listView->addAction(ui->Proper);
    ui->listView->addAction(ui->action_hide);
    ui->listView->addAction(ui->action_terminal);
    ui->listView->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listView->setMouseTracking(true);




    selectionModel=ui->treeView->selectionModel();
    connect(ui->action_terminal,SIGNAL(triggered()),this,SLOT(terminal()));//右键在终端显示
    connect(ui->action_hide,SIGNAL(triggered()),this,SLOT(hiden()));//关于是否显示隐藏文件
    connect(ui->action_nohide,SIGNAL(triggered()),this,SLOT(nohide()));
    connect(ui->action_D,SIGNAL(triggered()),this,SLOT(removefile()));//删除文件或文件夹
    connect(ui->actionCopy_C,SIGNAL(triggered()),this,SLOT(copy()));//复制、剪切、粘贴
    connect(ui->actionCut_T,SIGNAL(triggered()),this,SLOT(cut()));
    connect(ui->actionPaste_P,SIGNAL(triggered()),this,SLOT(paste()));
    connect(ui->action_New_File,SIGNAL(triggered()),this,SLOT(newfile()));
    connect(ui->action_New_Folder,SIGNAL(triggered()),this,SLOT(newfolder()));
    connect(ui->actionRename_R,SIGNAL(triggered()),this,SLOT(rename()));
    connect(ui->action_About,SIGNAL(triggered()),this,SLOT(about()));
    connect(ui->action_About_Qt,SIGNAL(triggered()),this,SLOT(aboutQt()));
    connect(ui->action_Recoil,SIGNAL(triggered()),this,SLOT(recoil()));
   connect(ui->action_Onward,SIGNAL(triggered()),this,SLOT(onward()));
    //connect(ui->action_Recoil,SIGNAL(triggered()),&mainproc,SLOT(backCurFile()));
   // connect(Forwardaction,SIGNAL(triggered()),&mainproc,SLOT(forwardCurFile()));
    connect(ui->action_Up,SIGNAL(triggered()),this,SLOT(up()));

    connect(this->button,SIGNAL(clicked()),this,SLOT(changeText()));
    connect(ui->listView,SIGNAL(clicked(QModelIndex)),this,SLOT(detail(QModelIndex)));
    //connect(this->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(changeText(QString)));
    connect(ui->listView,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(changeIndex(QModelIndex)));
    connect(comboBox,SIGNAL(activated(int)),this,SLOT(chooseMode(int)));//切换3种显示方式的
    connect(selectionModel,SIGNAL(currentChanged(const QModelIndex&,const QModelIndex&)),this,SLOT(isSelected(const QModelIndex&,const QModelIndex&)));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void MainWindow::isSelected(const QModelIndex& current,const QModelIndex& previous)
{    
    if(current==previous)  return;   
    QString selectedPath=dirModel->filePath(current);
    QDir dir(selectedPath);        
    QStringList nameFilter;
    dirModel1=new QDirModel(nameFilter,QDir::AllEntries|QDir::NoDotAndDotDot,QDir::Name|QDir::DirsFirst|QDir::Type);
    dirModel1->setReadOnly(false);
    ui->listView->setModel(dirModel1);
    ui->listView->setRootIndex(dirModel1->index(selectedPath));   
    QString path=selectedPath;
    QFileInfo *info=new QFileInfo(path);
    if(info->isDir())
    {
        int a,j=0;
        for(a=pathList.count()-pos;a>0;a--)
        {
            pathList.removeAt(pos+j);
        }
        this->pathList.append(selectedPath);
        pos++;
        qDebug("pos=%d",this->pos);
        qDebug("count=%d",pathList.count());
        QDir *dir=new QDir(path);
        QStringList filter;
        QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
        int i=fileInfo->count();
        label1->setText(tr("共有%1项").arg(i-2));
    }
    this->lineEdit->setText(dirModel->filePath(current));

   // this->label1->setText(tr("共有%1项").arg(i));
    QStringList fileName=dir.entryList(nameFilter,QDir::Files|QDir::NoSymLinks);
    QStringList dirName=dir.entryList(nameFilter,QDir::Dirs|QDir::NoDotAndDotDot);;
    updateListModel(dirName,fileName,dir);
}
void MainWindow::updateListModel(QStringList& dirName,QStringList& fileName,QDir& dir)
{
    listModel->removeRows(0,listModel->rowCount()-1,QModelIndex());
    listModel->insertRows(0,fileName.size(),QModelIndex());
    QModelIndex index;
    for(int i=0;i<fileName.size();i++)
     {
        QString strFilePath=dir.absoluteFilePath(fileName[i]);
        index=listModel->index(i,0);
        bool t=listModel->setData(index,(QVariant)strFilePath,Qt::EditRole);

        index=listModel->index(i,1);
        listModel->setData(index,(QVariant)tr("文件"),Qt::EditRole);

        QFile file(strFilePath);
        QFileInfo fileInfo(file);
        qint64 size=fileInfo.size();
        index=listModel->index(i,2);
        listModel->setData(index,(QVariant)tr("%1 KB").arg(int((size+1023)/1024)),Qt::EditRole);

        QDateTime dateTime=fileInfo.created();
        QString strDateTime=dateTime.toString(tr("yyyy MM月dd日hh:mm"));
        index=listModel->index(i,3);
        listModel->setData(index,(QVariant)strDateTime,Qt::EditRole);

       QString strPermission;
       if(fileInfo.isWritable()) strPermission=("w");
       if(fileInfo.isReadable()) strPermission.append("r");
       if(fileInfo.isExecutable()) strPermission.append("x");
        index=listModel->index(i,4);
        listModel->setData(index,(QVariant)strPermission,Qt::EditRole);
    }
}
void MainWindow::chooseMode(int i)
{    
    if(i==0)
    {
        ui->tableView->hide();
        ui->listView->setViewMode(QListView::IconMode);
        ui->listView->update();
    }
    if(i==1)
    {
        ui->tableView->hide();
        ui->listView->setViewMode(QListView::ListMode);
        //ui->listView->setResizeMode(QListView::Adjust);
        ui->listView->setSpacing(10);
        ui->listView->update();
    }
    if(i==2)
    {
        ui->listView->hide();
        ui->tableView->show();
    }
}


void MainWindow::on_action_Quit_triggered()
{
    this->close();
}
void MainWindow::changeIndex(QModelIndex index)
{
    QFileInfo *info=new QFileInfo(dirModel1->filePath(index));
    if(info->isDir())
    {
        //this->pathList.append(dirModel1->filePath(index));
        //pos++;
        ui->listView->setRootIndex(index);
        ui->treeView->setCurrentIndex(dirModel->index(dirModel1->filePath(index)));
    }
    /*
    else if(info->isExecutable())
    {
        char env[50];
        strcpy(env,info->dir().path().toUtf8());
        qDebug("env=%s",env);
        char name[50];
        QString string=tr("./")+info->fileName();
        strcpy(name,string.toUtf8());
        qDebug("name=%s",name);
        int pid;
        if((pid=fork())==0)
        {
            execl(env,name,NULL);
            exit(0);
        }
    }
    */
    else if(info->isFile())
    {
        QString string=this->lineEdit->text();
        char path[50];
        strcpy(path,string.toUtf8());
        int pid;
        if((pid=fork())==0)
        {
            execl("/usr/bin/gedit","gedit",path,NULL);
            exit(0);
        }
    }    


}
void MainWindow::changeText()
{
    //QString string=this->lineEdit->text();
    //this->pathList.append(string);
    //pos++;
    QFileInfo *info=new QFileInfo(this->lineEdit->text());    
    if(info->isDir())
    {
        //ui->listView->setRootIndex(dirModel1->index(this->lineEdit->text()));
        ui->treeView->setCurrentIndex(dirModel->index(this->lineEdit->text()));
    }
    else return;

}
void MainWindow::go()
{
    //this->button->setText(this->lineEdit->text());
}
void MainWindow::detail(QModelIndex index)
{
    QString path=dirModel1->filePath(index);
    QFileInfo *info=new QFileInfo(path);
    if(info->isDir())
    {
        QDir *dir=new QDir(path);
        QStringList filter;
        QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
        int i=fileInfo->count();
        label1->setText(tr("选中\"%1\" (共有%2项)").arg(info->fileName()).arg(i-2));
    }
    else
    {
        label1->setText(tr("选中\"%1\" (%2字节)").arg(info->fileName()).arg(info->size()));
    }
    this->lineEdit->setText(info->filePath());
}

void MainWindow::on_action_dis_triggered()
{
    ui->dockWidget_2->show();
}



void MainWindow::on_Proper_triggered()
{
    QString string=this->lineEdit->text();
    QFileInfo *info=new QFileInfo(string);
    attrDialog->setCurFile(*info);
    attrDialog->exec();
}
void MainWindow::recoil()
{   
    if(pathList.count()>0)
    {
        --pos;
        qDebug("pos=%d",this->pos);
        qDebug("count=%d",pathList.count());
        QString string=this->pathList.at(pos-1);
        ui->listView->setRootIndex(dirModel1->index(string));
        this->lineEdit->setText(string);
    }
    else return;
}
void MainWindow::onward()
{
    if(pos>pathList.count()-1&&pathList.count()>=0)
    {
        return;
    }
    else
    {
        ++pos;
        qDebug("pos=%d",this->pos);
        qDebug("count=%d",pathList.count());
        QString string=this->pathList.at(pos-1);
        ui->listView->setRootIndex(dirModel1->index(string));
        this->lineEdit->setText(string);
    }
   // else return;
}
void MainWindow::up()
{
    //if(dirModel-)
    QFileInfo *info=new QFileInfo(this->lineEdit->text());
    QDir dir=info->dir();
    QString string=dir.path();
    ui->listView->setRootIndex(dirModel1->index(string));
    this->lineEdit->setText(string);
}
void MainWindow::about()
{
    QMessageBox *msgBox=new QMessageBox(this);
    msgBox->setWindowTitle(tr("关于"));
    msgBox->setText(tr("这是一个用QT编写的文件浏览器"));
    msgBox->show();

}
void MainWindow::aboutQt()
{
    QMessageBox::aboutQt(this);
}
void MainWindow::rename()
{
    QString string=this->lineEdit->text();
    QFileInfo *info=new QFileInfo(string);
    ui->listView->edit(dirModel1->index(string));    
    this->lineEdit->setText(info->dir().path());
}
void MainWindow::removefile()
{
    QMessageBox *msgBox=new QMessageBox(this);
    msgBox->setWindowTitle(tr("是否删除？"));
    msgBox->setText(tr("是否删除%1").arg(this->lineEdit->text()));
    QPushButton *ok=new QPushButton(tr("是"));   
    msgBox->addButton(ok,QMessageBox::YesRole);
    QPushButton *cancel=new QPushButton(tr("否"));
    msgBox->addButton(cancel,QMessageBox::NoRole);
    msgBox->exec();
    if(msgBox->clickedButton()==ok)
    {
        QFileInfo *info=new QFileInfo(this->lineEdit->text());
        if(info->isFile())
        {
            int i= QFile::remove(this->lineEdit->text());
            this->lineEdit->setText(info->dir().path());
            qDebug("i=%d",i);
            dirModel1->refresh();
        }
        else if(info->isDir())
        {
            char pathname[50];
            QString string=this->lineEdit->text();
            strcpy(pathname,string.toUtf8());
            qDebug("pathname=%s",pathname);
            int p;
            if((p=fork())==0)
            {
                execl("/bin/rm","rm","-rf",pathname,NULL);
                exit(0);
            }
            else if(p>0)
            {
                sleep(1);
                dirModel->refresh();
                 dirModel1->refresh();
                 this->lineEdit->setText(info->dir().path());
            }
        }
    }
    else qDebug("fail");
}
void MainWindow::newfile()
{
    QString string=this->lineEdit->text();
    QString string1;
    string+=tr("/新文件");
    QFileInfo *info=new QFileInfo(string);
    int i=1;
    qDebug("aa");
    if(!(info->exists()))
    {
        qDebug("ok");
        //string+=tr("/新文件");
        char filename[50];
        strcpy(filename,string.toUtf8());
        int pid;
        if((pid=fork())==0)
        {
            execl("/bin/touch","touch",filename,NULL);
            exit(0);
        }
        else if(pid>0)
        {
            sleep(1);
            dirModel1->refresh();
            this->lineEdit->setText(string);
            this->rename();
        }
    }
    else
    {
        qDebug("no");
        while(info->exists())
        {
            qDebug("no1");
            string1=string+tr("(%1)").arg(i++);
            qDebug()<<string1;
            info->setFile(string1);
        }
        //string+=tr("(%1)").arg(i);
        char filename[50];
        strcpy(filename,string1.toUtf8());
        int pid;
        if((pid=fork())==0)
        {
            execl("/bin/touch","touch",filename,NULL);
            exit(0);
        }
        else if(pid>0)
        {
            sleep(1);
            dirModel1->refresh();
            this->lineEdit->setText(string1);
            this->rename();
        }
    }
    dirModel->refresh();
    dirModel1->refresh();

}
void MainWindow::newfolder()
{
    QDir dir(this->lineEdit->text());
        int i=1;
        if(!dir.exists(tr("新建文件夹")))
        {
            QString string=tr("新建文件夹");
            dir.mkdir(string);
            this->lineEdit->setText(this->lineEdit->text()+"/"+string);
            this->rename();
        }
        else{
            while(dir.exists(tr("新建文件夹(%1)").arg(i)))
                i++;
            QString string=tr("新建文件夹(%1)").arg(i);
            dir.mkdir(string);
            this->lineEdit->setText(this->lineEdit->text()+"/"+string);
            this->rename();
        }
        dirModel->refresh();
        dirModel1->refresh();
}
void MainWindow::copy()
{
    sourcePath=this->lineEdit->text();
    this->flag=0;
    //qDebug()<<this->sourcePath.toUtf8();
}
void MainWindow::cut()
{
    sourcePath=this->lineEdit->text();
    this->flag=1;
}
void MainWindow::paste()
{
    desPath=this->lineEdit->text();
    //qDebug()<<this->desPath.toUtf8();
    char source[50],des[50];
    strcpy(source,sourcePath.toUtf8());
    qDebug()<<sourcePath.toUtf8();
    strcpy(des,desPath.toUtf8());
    qDebug()<<desPath.toUtf8();
    int pid;
    if((pid=fork())==0)
    {
        if(this->flag==0)
        {
            execl("/bin/cp","cp","-rp",source,des,NULL);
            exit(0);
        }
        else if(this->flag==1)
        {
            execl("/bin/mv","mv","-f",source,des,NULL);
            exit(0);
        }
    }
    else if(pid>0)
    {
        sleep(1);
        dirModel1->refresh();
       // ui->listView->update(dirModel1->index(desPath));
    }

}
void MainWindow::hiden()
{
    dirModel1->setFilter(QDir::AllEntries|QDir::NoDotAndDotDot|QDir::Hidden);
    ui->listView->removeAction(ui->action_hide);//这里是在弄那个菜单栏显示用
    ui->listView->addAction(ui->action_nohide);
}
void MainWindow::nohide()
{
    dirModel1->setFilter(QDir::AllEntries|QDir::NoDotAndDotDot);
    ui->listView->removeAction(ui->action_nohide);
    ui->listView->addAction(ui->action_hide);
}
void MainWindow::terminal()
{
    QFileInfo *info=new QFileInfo(this->lineEdit->text());
    qDebug("ok1");
    if(info->isDir())
    {
        qDebug("ha");
        char path[50];
        strcpy(path,this->lineEdit->text().toUtf8());
        qDebug("path=%s",path);
        int pid;
        if((pid=fork())==0)
        {
            execl("/usr/bin/gnome-terminal","gnome-terminal","--working-directory",path,NULL);
            exit(0);
        }


    }
    else return;
}

