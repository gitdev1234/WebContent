#-------------------------------------------------
#
# Project created by QtCreator 2016-07-05T13:30:07
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = WebContent
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app

INCLUDEPATH += include/
INCLUDEPATH += ../include/

SOURCES += main.cpp \
    src/OpenWeatherMap.cpp \
    src/WebContent.cpp \
    src/DataBuffer.cpp

HEADERS += \
    include/OpenWeatherMap.h \
    include/WebContent.h \
    include/WebContentType.h \
    include/DataBuffer.h
