#include <QApplication>

#include "frame.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Frame mainWin;
    mainWin.show();
    return app.exec();
}
