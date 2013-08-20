TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../MazeComponents/MazeComponents.pri)

SOURCES += main.cpp \
    enchantedmazecreator.cpp \
    bombedmazecreator.cpp \
    mazecreator.cpp

HEADERS += \
    enchantedmazecreator.h \
    bombedmazecreator.h \
    mazecreator.h

