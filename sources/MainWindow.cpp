#include<iostream>
#include<string>
#include<QtGui>
#include<QFileDialog>
#include<QTableWidgetItem>
#include<QMessageBox>
#include"headers/MainWindow.h"


MainWindow::MainWindow(QMainWindow *parent):QMainWindow(parent){
    setupUi(this);

    initTab();
    fileSaved = true;

    connect(actionOpen,SIGNAL(triggered()),this,SLOT(openFileDialog()));
    connect(actionSave,SIGNAL(triggered()),this,SLOT(saveFile()));
    connect(actionSave_As, SIGNAL(triggered()),this,SLOT(saveAsFile()));
    connect(actionClose,SIGNAL(triggered()),this,SLOT(closeCurrent()));
    connect(chkBxRO,SIGNAL(toggled(bool)),this,SLOT(chkBoxRO(bool)));
    connect(tabWidget, SIGNAL(currentChanged(int)),this,SLOT(initSheet(int)));
    connect(plainTextEdit,SIGNAL(textChanged()),this,SLOT(contentModified()));
    connect(actionExit,SIGNAL(triggered()),this,SLOT(exitProgram()));

}
void MainWindow::openFileDialog(void){

    QFileDialog* openFileDialog = new QFileDialog(this);
    openFileDialog->setFileMode(QFileDialog::ExistingFile);
    openFileDialog->setNameFilter(tr("Data Files(*.csv *.txt)"));
    openFileDialog->setViewMode(QFileDialog::List);
    /* TASK - FileDialog only done for Linux, need to change the default directory suitable for Windows */
    openFileDialog->setDirectory("/home");
    QStringList selectedFiles;
    if(openFileDialog->exec())
        selectedFiles = openFileDialog->selectedFiles();
    if(!selectedFiles.empty()){
        openFileName = selectedFiles[0];
        this->readFileIntoTabs();
        newFile = false;
      }
}

void MainWindow::initTab(void){
    tabWidget->setCurrentIndex(tabWidget->indexOf(textTab));
    dataFromFile = new FileDataIp();
}

void MainWindow::readFileIntoTabs(){
    dataFromFile->initialize(openFileName);
    plainTextEdit->clear();
    plainTextEdit->appendPlainText(QString::fromStdString(dataFromFile->strFullData));
    chkBxRO->setChecked(true);
    if(tabWidget->currentIndex() == tabWidget->indexOf(sheetTab)){
        initSheet(tabWidget->indexOf(sheetTab));
    }
    //Save disabled since plainTextEdit is modified when file is opened
    actionSave->setEnabled(false);
}

void MainWindow::saveFile(){
    if(newFile)
        saveAsFile();
    else{
        QString contents = plainTextEdit->toPlainText();
        writeToFile(openFileName,&contents);
    }
}

void MainWindow::initSheet(int index){
    if(index == tabWidget->indexOf(sheetTab)){
        if(openFileName != ""){
//Edit here to read data from file and insert rows:
        std::string cellString = "";
        char delim = ',';
        int cols = 1;
        QTableWidgetItem *toInsert;
        tableWidget->setRowCount(dataFromFile->dataArray.size());
        std::string parseLength = dataFromFile->dataArray[0];

        for(unsigned int i = 0; i < parseLength.length(); i++){
            if(parseLength[i] == delim){
                cols++;
            }
        }
        tableWidget->setColumnCount(cols);

        int i = 0, j = 0;
        for(std::string::const_iterator it = dataFromFile->strFullData.begin(); it != dataFromFile->strFullData.end(); it++){
        if(*it != '\n'){
            if(*it != ','){
                cellString = cellString + *it;
            }
            else{
                toInsert = new QTableWidgetItem(QString::fromStdString(cellString));
                tableWidget->setItem(i,j,toInsert);
                cellString = "";
                j = j + 1;
            }
        }
        else{
             toInsert = new QTableWidgetItem(QString::fromStdString(cellString));
                tableWidget->setItem(i,j,toInsert);
                cellString = "";
                i = i + 1;
                j = 0;
            }
        }
        toInsert = new QTableWidgetItem(QString::fromStdString(cellString));
         tableWidget->setItem(i,j,toInsert);
    }
   }
}

void MainWindow::saveAsFile(){

}
void MainWindow::closeCurrent(){

}

void MainWindow::writeToFile(QString fileName,QString *contents){
    writeFileOp = new FileDataOp();
    if(writeFileOp->writeFile(fileName,contents) == FILE_WRITE_SUCCESS){
        fileSaved = true;
        actionSave->setEnabled(false);
    }
    else{
        fileSaved = false;
        QMessageBox fileWriteError;
        fileWriteError.setWindowTitle("Error");
        fileWriteError.setText("Error writing to File");
        fileWriteError.setStandardButtons(QMessageBox::Ok);
        fileWriteError.exec();
    }
}

void MainWindow::chkBoxRO(bool checked)
{
    plainTextEdit->setReadOnly(checked);
    tableWidget->setEnabled(!checked);
}

void MainWindow::contentModified(){
    //Should write a better modification identification program
    fileSaved = false;
    actionSave->setEnabled(true);
}

void MainWindow::exitProgram(){
    if(fileSaved){
        this->close();
    }
    else{
        QMessageBox fileWriteError;
        fileWriteError.setWindowTitle("File not saved");
        fileWriteError.setText("Save file before close?");
        fileWriteError.setStandardButtons(QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        fileWriteError.setDefaultButton(QMessageBox::Yes);
        int option = fileWriteError.exec();

        switch(option){
            case QMessageBox::Yes:
                saveFile();
                this->close();
            break;

            case QMessageBox::No:
                this->close();
            break;
            case QMessageBox::Cancel:
                return;
            break;
        }

    }
}
