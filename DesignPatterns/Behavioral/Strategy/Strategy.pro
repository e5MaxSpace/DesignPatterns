TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    composition.cpp \
    compositor.cpp \
    component.cpp \
    simplecompositor.cpp \
    texcompositor.cpp \
    arraycompositor.cpp

HEADERS += \
    composition.h \
    compositor.h \
    component.h \
    simplecompositor.h \
    texcompositor.h \
    arraycompositor.h

