include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
#QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
#QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
#LIBS += -lgcov

DEFINES += INPUTDIR=\\\"$$PWD/input/\\\"

HEADERS += ../app/eq.h \ \
    des_test.h

SOURCES +=     main.cpp \
    ../app/eq.c

INCLUDEPATH += ../app

DISTFILES += \
    input/TestSTDOut_output.txt
