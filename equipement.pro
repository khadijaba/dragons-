# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    equipement.cpp \
    login.cpp \
        main.cpp \
    connection.cpp \
    main_equipement.cpp

HEADERS += \
    connection.h \
    equipement.h \
    login.h \
    main_equipement.h

FORMS += \
    login.ui \
    main_equipement.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
