#include "myudp.h"

MyUDP::MyUDP(QObject *parent) :
    QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress("127.0.0.1"), 1488);
}

void MyUDP::HelloUDP()
{
    QByteArray Data;

    Data.append("login_1");
    socket->writeDatagram(Data, QHostAddress("127.0.0.1"), 1488);
    qDebug() << "Message port: " << Data;
}
void MyUDP::HelloUDP2()
{
    QByteArray Data;

    Data.append("login_1@: BlaBlaBla");
    socket->writeDatagram(Data, QHostAddress("127.0.0.1"), 1488);
    qDebug() << "Message port: " << Data;
}
