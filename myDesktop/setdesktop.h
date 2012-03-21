#ifndef SETDESKTOP_H
#define SETDESKTOP_H

#include <QDialog>
#include <QMainWindow>
#include <QFileDialog>
//#include <mainwindow.h>

namespace Ui {
    class SetDesktop;
}

class SetDesktop : public QDialog
{
    Q_OBJECT

public:
    explicit SetDesktop(QWidget *parent = 0,QMainWindow* p=0);
    ~SetDesktop();

private slots:
    void on_Browser_clicked();

    void on_buttonBox_accepted();

private:
    Ui::SetDesktop *ui;
    QString file;
    QMainWindow* pp;
};

#endif // SETDESKTOP_H
