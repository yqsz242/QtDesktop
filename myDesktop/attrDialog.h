#ifndef ATTRDIALOG_H
#define ATTRDIALOG_H
#include<QtGui/QtGui>
#include "ui_dialog.h"
class AttrDialog : public QDialog,public Ui::Dialog
{
    Q_OBJECT

public:
    AttrDialog(QWidget *parent = 0);
    ~AttrDialog();

    void setCurFile(QFileInfo &fileinfo);
private:
        QFileInfo curfile;

private slots:
    void on_pushButton_clicked();
};
#endif // ATTRDIALOG_H
