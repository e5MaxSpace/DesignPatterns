TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../MazeComponents/MazeComponents.pri)
include(../AbstractFactory/AbstractFactory.pri)

SOURCES += main.cpp \
    mazeprototypefactory.cpp

HEADERS += \
    mazeprototypefactory.h

