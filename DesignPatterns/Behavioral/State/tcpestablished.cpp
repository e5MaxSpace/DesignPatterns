#include "tcpestablished.h"

#include "tcpconnection.h"

TCPEstablished::TCPEstablished()
{
}

TCPEstablished::~TCPEstablished()
{
}

void TCPEstablished::Transmit(TCPConnection *tcp, TCPOctetStream *stream)
{
    tcp->ProcessOctet(stream);
}

void TCPEstablished::Close(TCPConnection *tcp)
{
}

TCPEstablished *TCPEstablished::Instance()
{
    static TCPEstablished singleton;
    return &singleton;
}
