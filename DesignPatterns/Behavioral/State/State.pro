TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    tcpconnection.cpp \
    tcpstate.cpp \
    tcpclosed.cpp \
    tcpestablished.cpp \
    tcplisten.cpp \
    tcpoctetstream.cpp

HEADERS += \
    tcpconnection.h \
    tcpstate.h \
    tcpclosed.h \
    tcpestablished.h \
    tcplisten.h \
    tcpoctetstream.h

