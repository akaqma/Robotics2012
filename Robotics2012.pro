#-------------------------------------------------
#
# Project created by QtCreator 2012-07-12T23:16:17
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = Robotics2012
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    _model.cpp \
    _draw_gl.cpp \
    _calculator.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    _gl.h

FORMS    += mainwindow.ui

#mac: LIBS += -framework GLUT
#mac: CONFIG -= x86_64 CONFIG +=x86 ppc
