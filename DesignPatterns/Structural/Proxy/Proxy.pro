TEMPLATE = app
CONFIG += console
CONFIG -= qt

include(../SharedFiles/SharedFiles.pri)

SOURCES += main.cpp \
    graphic.cpp \
    image.cpp \
    imageproxy.cpp \
    event.cpp \
    textdocument.cpp \
    imageptr.cpp

HEADERS += \
    graphic.h \
    image.h \
    imageproxy.h \
    event.h \
    textdocument.h \
    imageptr.h

