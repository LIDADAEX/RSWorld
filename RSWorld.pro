QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/game/character/person/abstractAttribute/abstractpersonattribute.cpp \
    src/game/character/person/abstractPerson/abstractbody.cpp \
    src/game/character/person/abstractPerson/abstractbodypart.cpp \
    src/game/character/person/abstractPerson/abstractperson.cpp \
    src/game/main/main.cpp \
    src/game/ui/mainwindow.cpp \
    src/item/abstractItem/abstractitem.cpp \
    src/item/abstractItem/abstractweapon.cpp \
    src/item/abstractItemAttribute/abstractitemattribute.cpp

HEADERS += \
    src/game/character/person/abstractAttribute/abstractpersonattribute.h \
    src/game/character/person/abstractPerson/abstractbody.h \
    src/game/character/person/abstractPerson/abstractbodypart.h \
    src/game/character/person/abstractPerson/abstractperson.h \
    src/game/ui/mainwindow.h \
    src/item/abstractItem/abstractitem.h \
    src/item/abstractItem/abstractweapon.h \
    src/item/abstractItemAttribute/abstractitemattribute.h

FORMS += \
    src/game/ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
