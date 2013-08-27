TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    scanner.cpp \
    parser.cpp \
    programnodebuilder.cpp \
    programnode.cpp \
    codegenerator.cpp \
    expressionnode.cpp \
    statementnode.cpp \
    compiler.cpp

HEADERS += \
    scanner.h \
    parser.h \
    programnodebuilder.h \
    programnode.h \
    codegenerator.h \
    expressionnode.h \
    statementnode.h \
    compiler.h

