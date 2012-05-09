#ifndef PROPERDIALOG_H
#define PROPERDIALOG_H

#include <QWidget>

namespace Ui {
    class properDialog;
}

class properDialog : public QWidget
{
    Q_OBJECT

public:
    explicit properDialog(QWidget *parent = 0);
    ~properDialog();

private:
    Ui::properDialog *ui;
};

#endif // PROPERDIALOG_H
