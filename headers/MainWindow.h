#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "headers/ui_csvMwindow.h"
#include "headers/FileDataIp.h"
#include "headers/FileDataOp.h"

class MainWindow : public QMainWindow, Ui::csvMWindow{
    Q_OBJECT
public:
    MainWindow(QMainWindow *parent = 0);
    void initTreeView();
    void initTab();
    void readFileIntoTabs();
private slots:
    void openFileDialog(void);
    void saveFile();
    void saveAsFile();
    void closeCurrent();
    void chkBoxRO(bool);
    void initSheet(int);
private:
    QString openFileName;
    QSize mainWindowSize;
    FileDataIp *dataFromFile;
    FileDataOp *writeFileOp;
    bool newFile;
    void writeToFile(QString fileName,QString *contents);
};


#endif // MAINWINDOW_H
