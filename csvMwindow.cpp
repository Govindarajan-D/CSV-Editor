#include "csvMwindow.h"
#include "ui_csvMwindow.h"

csvMWindow::csvMWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::csvMWindow)
{
    ui->setupUi(this);
}

csvMWindow::~csvMWindow()
{
    delete ui;
}

void csvMWindow::on_actionExit_triggered()
{

}
