#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T00:41:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FirstGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    servant.cpp \
    material.cpp \
    profile.cpp \
    servantdialog.cpp \
    farmablenode.cpp \
    efficientfarming.cpp \
    inputdialog.cpp \
    modifymaterials.cpp \
    goaldialog.cpp \
    singularity_chooser.cpp \
    event.cpp

HEADERS  += mainwindow.h \
    servant.h \
    overload.h \
    material.h \
    profile.h \
    servantdialog.h \
    farmablenode.h \
    efficientfarming.h \
    initializing.h \
    inputdialog.h \
    modifymaterials.h \
    goaldialog.h \
    singularity_chooser.h \
    event.h

FORMS    += mainwindow.ui \
    servantdialog.ui \
    inputdialog.ui \
    modifymaterials.ui \
    goaldialog.ui \
    singularity_chooser.ui

RESOURCES += \
    resources.qrc
