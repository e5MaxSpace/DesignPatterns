TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../MazeComponents/MazeComponents.pri)

SOURCES += main.cpp \
    mazebuilder.cpp \
    standardmazebuilder.cpp

HEADERS += \
    mazebuilder.h \
    standardmazebuilder.h

OTHER_FILES += \
    Builder.pri

