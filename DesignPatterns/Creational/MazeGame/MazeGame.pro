TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../MazeComponents/MazeComponents.pri)
include(../AbstractFactory/AbstractFactory.pri)
include(../Builder/Builder.pri)

SOURCES += main.cpp \
    mazegame.cpp

HEADERS += \
    mazegame.h

