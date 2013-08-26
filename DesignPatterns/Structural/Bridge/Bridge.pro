TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../SharedFiles/SharedFiles.pri)

SOURCES += main.cpp \
    window.cpp \
    windowimp.cpp \
    applicationwindow.cpp \
    view.cpp \
    iconwindow.cpp \
    xwindowimp.cpp \
    pmwindowimp.cpp

HEADERS += \
    window.h \
    windowimp.h \
    applicationwindow.h \
    view.h \
    iconwindow.h \
    xwindowimp.h \
    pmwindowimp.h

