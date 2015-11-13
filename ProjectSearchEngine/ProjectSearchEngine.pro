TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    documentparser.cpp \
    pugixml.cpp \
    stopwordmanager.cpp \
    stemmer.cpp \
    queryprocessor.cpp

HEADERS += \
    documentparser.h \
    stopwordmanager.h \
    stemmer.h \
    queryprocessor.h

