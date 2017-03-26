#include <QCoreApplication>
#include "myudp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyUDP client;
    client.HelloUDP();
    client.HelloUDP2();
    /**
    client.readyRead();
    while(1){
        QTextStream str(stdin);
        QString msg = str.readLine();
        client.HelloUDP(msg);
    }**/
    return a.exec();
}
