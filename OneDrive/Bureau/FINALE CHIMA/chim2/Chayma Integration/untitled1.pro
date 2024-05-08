QT       += core gui sql
QT += network printsupport  widgets axcontainer serialport
QT += charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alert.cpp \
    coach.cpp \
    connection.cpp \
    email.cpp \
    emailadress.cpp \
    entrepreneur.cpp \
    etude_projet.cpp \
    formation.cpp \
    gestionnaireressources.cpp \
    mailling.cpp \
    main.cpp \
    mainwindow.cpp \
    projet.cpp \
    ressource.cpp \
    stock.cpp

HEADERS += \
    alert.h \
    coach.h \
    connection.h \
    email.h \
    emailadress.h \
    entrepreneur.h \
    etude_projet.h \
    formation.h \
    gestionnaireressources.h \
    mailling.h \
    mainwindow.h \
    projet.h \
    ressource.h \
    stock.h
FORMS += \
    alert.ui \
    gestionnaireressources.ui \
    mainwindow.ui \
    stock.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc
