TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../SharedFiles/SharedFiles.pri)

SOURCES += main.cpp \
    shape.cpp \
    manipulator.cpp \
    textview.cpp \
    textshape.cpp

HEADERS += \
    shape.h \
    manipulator.h \
    textview.h \
    textshape.h

