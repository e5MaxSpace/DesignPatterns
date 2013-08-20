TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    mazefactory.cpp \
    enchantedmazefactory.cpp \
    bombedmazefactory.cpp

include(../MazeComponents/MazeComponents.pri)

HEADERS += \
    mazefactory.h \
    enchantedmazefactory.h \
    bombedmazefactory.h

OTHER_FILES += \
    AbstractFactory.pri

