/********************************************************************************
** Form generated from reading UI file 'csvMwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVMWINDOW_H
#define UI_CSVMWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_csvMWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionFolder_Structure;
    QAction *actionOptions;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFind_and_Replace;
    QAction *actionSave;
    QAction *actionSave_As;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkBxRO;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *textTab;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *sheetTab;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuCSV_Editor;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *csvMWindow)
    {
        if (csvMWindow->objectName().isEmpty())
            csvMWindow->setObjectName(QString::fromUtf8("csvMWindow"));
        csvMWindow->setEnabled(true);
        csvMWindow->resize(552, 316);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(csvMWindow->sizePolicy().hasHeightForWidth());
        csvMWindow->setSizePolicy(sizePolicy);
        actionNew = new QAction(csvMWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cersrc/icons/Icons/New.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(csvMWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cersrc/icons/Icons/Open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(csvMWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExit = new QAction(csvMWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionFolder_Structure = new QAction(csvMWindow);
        actionFolder_Structure->setObjectName(QString::fromUtf8("actionFolder_Structure"));
        actionFolder_Structure->setCheckable(true);
        actionOptions = new QAction(csvMWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionHelp = new QAction(csvMWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(csvMWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCut = new QAction(csvMWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(csvMWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(csvMWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionFind_and_Replace = new QAction(csvMWindow);
        actionFind_and_Replace->setObjectName(QString::fromUtf8("actionFind_and_Replace"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cersrc/icons/Icons/Find.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind_and_Replace->setIcon(icon2);
        actionSave = new QAction(csvMWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cersrc/icons/Icons/Save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(csvMWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cersrc/icons/Icons/SaveAS"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        centralWidget = new QWidget(csvMWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkBxRO = new QCheckBox(centralWidget);
        chkBxRO->setObjectName(QString::fromUtf8("chkBxRO"));

        verticalLayout->addWidget(chkBxRO);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        textTab = new QWidget();
        textTab->setObjectName(QString::fromUtf8("textTab"));
        horizontalLayout = new QHBoxLayout(textTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(textTab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(true);

        horizontalLayout->addWidget(plainTextEdit);

        tabWidget->addTab(textTab, QString());
        sheetTab = new QWidget();
        sheetTab->setObjectName(QString::fromUtf8("sheetTab"));
        horizontalLayout_2 = new QHBoxLayout(sheetTab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(sheetTab);
        if (tableWidget->columnCount() < 15)
            tableWidget->setColumnCount(15);
        if (tableWidget->rowCount() < 25)
            tableWidget->setRowCount(25);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(25);
        tableWidget->setColumnCount(15);

        horizontalLayout_2->addWidget(tableWidget);

        tabWidget->addTab(sheetTab, QString());
        splitter->addWidget(tabWidget);

        verticalLayout->addWidget(splitter);

        csvMWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(csvMWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 552, 19));
        menuCSV_Editor = new QMenu(menuBar);
        menuCSV_Editor->setObjectName(QString::fromUtf8("menuCSV_Editor"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        csvMWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(csvMWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        csvMWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCSV_Editor->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuCSV_Editor->addAction(actionNew);
        menuCSV_Editor->addAction(actionOpen);
        menuCSV_Editor->addAction(actionSave);
        menuCSV_Editor->addAction(actionSave_As);
        menuCSV_Editor->addAction(actionClose);
        menuCSV_Editor->addSeparator();
        menuCSV_Editor->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionFind_and_Replace);
        menuView->addAction(actionFolder_Structure);
        menuView->addAction(actionOptions);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(csvMWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), csvMWindow, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(csvMWindow);
    } // setupUi

    void retranslateUi(QMainWindow *csvMWindow)
    {
        csvMWindow->setWindowTitle(QApplication::translate("csvMWindow", "CSV Editor", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("csvMWindow", "&New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("csvMWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("csvMWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("csvMWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("csvMWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("csvMWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("csvMWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("csvMWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionFolder_Structure->setText(QApplication::translate("csvMWindow", "Folder Structure", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("csvMWindow", "Options", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("csvMWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("csvMWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("csvMWindow", "About", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("csvMWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("csvMWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("csvMWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("csvMWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("csvMWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("csvMWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionFind_and_Replace->setText(QApplication::translate("csvMWindow", "Find and Replace", 0, QApplication::UnicodeUTF8));
        actionFind_and_Replace->setShortcut(QApplication::translate("csvMWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("csvMWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("csvMWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("csvMWindow", "Save As", 0, QApplication::UnicodeUTF8));
        chkBxRO->setText(QApplication::translate("csvMWindow", "Read Only", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(textTab), QApplication::translate("csvMWindow", "Text", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(sheetTab), QApplication::translate("csvMWindow", "Sheet", 0, QApplication::UnicodeUTF8));
        menuCSV_Editor->setTitle(QApplication::translate("csvMWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("csvMWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("csvMWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("csvMWindow", "&Window", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("csvMWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class csvMWindow: public Ui_csvMWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVMWINDOW_H
