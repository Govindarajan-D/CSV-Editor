#-------------------------------------------------
#
# Project created by QtCreator 2017-06-29T10:54:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CSV_Editor
TEMPLATE = app


SOURCES +=\
        csvMwindow.cpp \
    MainWindow.cpp \
    Application.cpp \
    FileData.cpp

HEADERS  += csvMwindow.h \
    ui_csvMwindow.h \
    MainWindow.h \
    FileData.h

FORMS    += \
    csvMwindow.ui

RESOURCES += \
    CE_RSRC.qrc
