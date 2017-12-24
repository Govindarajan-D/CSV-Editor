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
    sources/Application.cpp \
    sources/csvMwindow.cpp \
    sources/FileData.cpp \
    sources/MainWindow.cpp

HEADERS  += \
    headers/csvMwindow.h \
    headers/FileData.h \
    headers/MainWindow.h \
    headers/ui_csvMwindow.h

FORMS    += \
    forms/csvMwindow.ui

RESOURCES += \
    resources/CE_RSRC.qrc
