#ifndef MYUDP_H
#define MYUDP_H

#include <QObject>
#include <QUdpSocket>

class MyUDP : public QObject
{
    Q_OBJECT
public:
    explicit MyUDP(QObject *parent = 0);
    void HelloUDP();
    void HelloUDP2();
signals:
public slots:

private:
    QUdpSocket *socket;

};

#endif // MYUDP_H
