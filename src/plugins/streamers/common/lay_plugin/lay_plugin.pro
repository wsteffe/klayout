
TARGET = cif
DESTDIR = $$OUT_PWD/../../../../lay_plugins

include($$PWD/../../../lay_plugin.pri)

INCLUDEPATH += $$PWD/../db_plugin
DEPENDPATH += $$PWD/../db_plugin
LIBS += -L$$DESTDIR/../db_plugins -lcif

!isEmpty(RPATH) {
  QMAKE_RPATHDIR += $$RPATH/db_plugins
}

HEADERS = \

SOURCES = \
  layCommonStreamOptions.cc \

FORMS = \
  CommonReaderOptionsPage.ui \