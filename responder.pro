TARGET = qmdns-responder

TEMPLATE = app

include ($$PWD/qMDNS.pri)
SOURCES += main.cpp

service.path = /lib/systemd/system/
service.files = qmdns-responder.service
target.path = /usr/bin/
INSTALLS += target service

