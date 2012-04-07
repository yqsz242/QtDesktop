#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
#include <QWidget>
#include <QString>
#include <QMainWindow>

class myLabel : QLabel{
    Q_OBJECT

    public:
    myLabel(const QString & text, QWidget * parent = 0);

    ~myLabel(){}

    signals:
    void clicked();

    public slots:
    void slotClicked();

    protected:

    public:
    void mousePressEvent ( QMouseEvent * event ) ;
};

#endif // MYLABEL_H
