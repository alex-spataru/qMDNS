#include "qMDNS.h"

#include <QCoreApplication>
#include <QHostInfo>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    qMDNS::getInstance()->setHostName(QHostInfo::localHostName());
    app.exec();
}
