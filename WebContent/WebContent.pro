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

LIBS += -lcurl

SOURCES += \
    src/OpenWeatherMap.cpp \
    src/WebContent.cpp \
    src/DataBuffer.cpp \
    src/DBInterface.cpp \
    src/HTTPRequest.cpp \
    src/LogWriter.cpp \
    src/SLevel.cpp \
    test/main.cpp \
    main_old.cpp

HEADERS += \
    include/OpenWeatherMap.h \
    include/WebContent.h \
    include/WebContentType.h \
    include/DataBuffer.h \
    include/catch.hpp \
    include/DBInterface.h \
    include/HTTPRequest.h \
    include/LogWriter.h \
    include/SLevel.h \
    include/Config.h
