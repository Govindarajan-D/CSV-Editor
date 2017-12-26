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
    sources/FileDataIp.cpp \
    sources/MainWindow.cpp \
    sources/FileDataOp.cpp

HEADERS  += \
    headers/csvMwindow.h \
    headers/FileDataIp.h \
    headers/MainWindow.h \
    headers/ui_csvMwindow.h \
    headers/FileDataOp.h

FORMS    += \
    forms/csvMwindow.ui

RESOURCES += \
    resources/CE_RSRC.qrc
