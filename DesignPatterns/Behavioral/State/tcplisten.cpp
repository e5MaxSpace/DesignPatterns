#include "tcplisten.h"

#include "tcpestablished.h"

TCPListen::TCPListen()
{
}

TCPListen::~TCPListen()
{
}

TCPListen *TCPListen::Instance()
{
    static TCPListen singleon;
    return &singleon;
}


void TCPListen::Send(TCPConnection *tcp)
{
    ChangeState(tcp, TCPEstablished::Instance());
}
