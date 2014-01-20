TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hydrogenlinalgsolver.cpp

LIBS += -llapack -lblas -larmadillo

HEADERS += \
    hydrogenlinalgsolver.h \
    types.h
