#-------------------------------------------------
#
# Project created by QtCreator 2019-06-02T10:48:22
#
#-------------------------------------------------

QT       += core gui sql
QT += printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ResumeManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    databasecommunicator.cpp \
    globalproductdata.cpp \
    educationdetails.cpp \
    workexperiencedetails.cpp

HEADERS  += mainwindow.h \
    databasecommunicator.h \
    globalproductdata.h \
    educationdetails.h \
    workexperiencedetails.h

FORMS    += mainwindow.ui \
    educationdetails.ui \
    workexperiencedetails.ui
