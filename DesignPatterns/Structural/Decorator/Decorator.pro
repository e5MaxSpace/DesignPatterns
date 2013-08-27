TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    visualcomponent.cpp \
    decorator.cpp \
    borderdecorator.cpp \
    scrolldecorator.cpp \
    dropshadowdecorator.cpp \
    client_window.cpp \
    textview_decorated.cpp

HEADERS += \
    visualcomponent.h \
    decorator.h \
    borderdecorator.h \
    scrolldecorator.h \
    dropshadowdecorator.h \
    client_window.h \
    textview_decorated.h

