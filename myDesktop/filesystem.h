#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "model.h"
#include <QMainWindow>
#include <QtGui/QtGui>
#include"proper.h"
namespace Ui {
    class fileSystem;
}

class fileSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit fileSystem(QWidget *parent = 0);
    ~fileSystem();
    QComboBox *comboBox;
    QDirModel *dirModel,*dirModel1;//分别用于treeView和listView
    TableModel *listModel;
    QItemSelectionModel* selectionModel;
    void updateListModel(QStringList& dirName,QStringList& fileName,QDir& dir);
    QModelIndex current;
    QModelIndex previous;
    QLineEdit *lineEdit;
    QLabel *label,*label1;
    QPushButton *button;
    proper *attrDialog;
    QList<QString> pathList;//存储路径
    int pos,flag;//这里她定义了两个变量，flag貌似是区分复制还是剪切的
    QString sourcePath,desPath;//源，目的，供复制粘贴使用
public slots:
    void terminal();
    void hiden();
    void nohide();
    void newfile();
    void newfolder();
    void copy();
    void cut();
    void paste();
    void removefile();
    void rename();
    void about();
    void aboutQt();
    void recoil();
    void onward();
    void up();
    void detail(QModelIndex);
    void go();
    void changeText();
    //void setListRoot(QModelIndex&);
   void isSelected(const QModelIndex&,const QModelIndex&);
   void chooseMode(int);
   void changeIndex(QModelIndex);
private:
    Ui::fileSystem *ui;
protected:
    void changeEvent(QEvent *e);
private slots:
    void on_Proper_triggered();
    void on_action_dis_triggered();
    void on_action_Quit_triggered();
};

#endif // FILESYSTEM_H
