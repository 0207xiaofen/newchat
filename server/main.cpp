
#include "mytcpserver.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServer *s=new TcpServer();
    s->start("10.20.87.180",9999);
    return a.exec();
}

