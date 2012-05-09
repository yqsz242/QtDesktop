#ifndef PROPER_H
#define PROPER_H
#include<QtGui/QtGui>
#include <QDialog>

namespace Ui {
    class proper;
}

class proper : public QDialog
{
    Q_OBJECT

public:
    explicit proper(QWidget *parent = 0);
    ~proper();
     void setCurFile(QFileInfo &fileinfo);
private:
        QFileInfo curfile;
private:
    Ui::proper *ui;
private slots:
     void on_pushButton_clicked();
};

#endif // PROPER_H
