#include "setdesktop.h"
#include "ui_setdesktop.h"
#include "mainwindow.h"

SetDesktop::SetDesktop(QWidget *parent,QMainWindow* p) :
    QDialog(parent),
    ui(new Ui::SetDesktop),
    pp(p)
{
    ui->setupUi(this);
}

SetDesktop::~SetDesktop()
{
    delete ui;
}

void SetDesktop::on_Browser_clicked()
{
    file = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)"));
}

void SetDesktop::on_buttonBox_accepted()
{
    ((MainWindow*)pp)->setDesktop(new QPixmap(file));
}
