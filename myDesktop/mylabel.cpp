#include "mylabel.h"
#include "qdebug.h"
#include "QMessageBox"
#include "mainwindow.h"
#include "QString"

myLabel::myLabel( const QString & text, QWidget * parent )
:QLabel(parent)
{
    connect(this, SIGNAL(clicked()), this, SLOT(slotClicked()));
}

void myLabel::slotClicked()
{
    QMessageBox::information(NULL, QString::fromLocal8Bit("单击"), QString::fromLocal8Bit("单击确定"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void myLabel::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}
