#include <QApplication>
#include <QMainWindow>
#include "csvMwindow.h"
#include "ui_csvMwindow.h"
#include "MainWindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *mw = new MainWindow;
    mw->show();

    return a.exec();
}
