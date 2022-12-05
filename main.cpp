#include "mainwindow.h"

#include <QApplication>
//QApplication is going to handle event handling...mouse movements etc
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
