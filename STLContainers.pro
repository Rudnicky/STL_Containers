TEMPLATE = app
CONFIG += console c++11
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sequencecontainers.cpp \
    notebook.cpp \
    menu.cpp \
    associativecontainers.cpp

HEADERS += \
    sequencecontainers.h \
    notebook.h \
    menu.h \
    associativecontainers.h \
    consts.h
