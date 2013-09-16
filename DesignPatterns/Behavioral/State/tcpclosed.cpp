#include "tcpclosed.h"

#include "tcpestablished.h"
#include "tcplisten.h"

TCPClosed::TCPClosed()
{
}

TCPClosed::~TCPClosed()
{
}

void TCPClosed::ActiveOpen(TCPConnection *tcp)
{
    ChangeState(tcp, TCPEstablished::Instance());
}

void TCPClosed::PassiveOpen(TCPConnection *tcp)
{
    ChangeState(tcp, TCPListen::Instance());
}

TCPClosed *TCPClosed::Instance()
{
    static TCPClosed singleton;
    return &singleton;
}
