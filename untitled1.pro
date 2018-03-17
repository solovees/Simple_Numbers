TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/release/ -llab3_prost
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/ -llab3_prost
else:unix: LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/ -llab3_prost

INCLUDEPATH += $$PWD/../../Lab3_library/lab3_prost
DEPENDPATH += $$PWD/../../Lab3_library/lab3_prost

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/release/liblab3_prost.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/liblab3_prost.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/release/lab3_prost.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/lab3_prost.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop_Qt_5_9_1_MinGW_32bit-Debug/liblab3_prost.a
