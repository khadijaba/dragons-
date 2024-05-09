QT       += core gui sql widgets axcontainer serialport network multimedia multimediawidgets

QT += printsupport

QT += charts

QT += sql
QT += texttospeech

QT += serialport


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
    chaine.cpp \
    chaine_interface.cpp \
    connection.cpp \
    emission_interface.cpp \
    abonne_interface.cpp \
    abonne.cpp \
    connexion.cpp \
    email.cpp \
    emailadress.cpp \
    employe_interface.cpp \
    equipement.cpp \
    historique.cpp \
    mailling.cpp \
    mainwindow.cpp \
    mainwindoww.cpp \
    qr.cpp \
    smtpclient.cpp \
    translator.cpp \
    translatordialog.cpp \
    main.cpp \
    publicite.cpp \
    employe.cpp \
    arduino.cpp \
    publicite_interface.cpp

HEADERS += \
    chaine.h \
    chaine_interface.h \
    emission_interface.h \
    abonne_interface.h \
    abonne.h \
    connexion.h \
    email.h \
    emailadress.h \
    equipement.h \
    historique.h \
    mailling.h \
    mainwindow.h \
    mainwindoww.h \
    qr.h \
    smtpclient.h \
    translator.h \
    translatordialog.h \
    connection.h \
    publicite.h \
    employe.h \
    employe_interface.h \
    arduino.h \
    publicite_interface.h

FORMS += \
    chaine_interface.ui \
    abonne_interface.ui \
    employe_interface.ui \
    emission_interface.ui \
    mailling.ui \
    mainwindow.ui \
    mainwindoww.ui \
    publicite_interface.ui \
    translatordialog.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    abonne.qrc \
    resource.qrc
