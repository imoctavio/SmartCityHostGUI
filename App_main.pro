#-------------------------------------------------
#
# Project created by QtCreator 2017-09-24T06:10:25
#
#-------------------------------------------------

QT       += core gui serialport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = App_main
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    second_window.cpp \
    temp_graph_node1.cpp \
    temp_graph_node2.cpp \
    temp_graph_node3.cpp

HEADERS  += mainwindow.h \
    second_window.h \
    temp_graph_node1.h \
    temp_graph_node2.h \
    temp_graph_node3.h

FORMS    += mainwindow.ui \
    second_window.ui \
    temp_graph_node1.ui \
    temp_graph_node2.ui \
    temp_graph_node3.ui

RESOURCES += \
    pictures.qrc
