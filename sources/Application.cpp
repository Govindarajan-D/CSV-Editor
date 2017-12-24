#include <QApplication>
#include <QMainWindow>
#include "headers/csvMwindow.h"
#include "headers/ui_csvMwindow.h"
#include "headers/MainWindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *mw = new MainWindow;
    mw->show();

    return a.exec();
}
