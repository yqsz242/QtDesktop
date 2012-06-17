#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QTextCodec *utg8 = QTextCodec::codecForName("utf-8");
        QTextCodec::setCodecForTr(utg8 );
        QTextCodec::setCodecForLocale(utg8 );
        QTextCodec::setCodecForCStrings(utg8 );
    QApplication app(argc, argv);
    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
