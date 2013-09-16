#ifndef TCPESTABLISHED_H
#define TCPESTABLISHED_H

#include "tcpstate.h"

class TCPEstablished : public TCPState
{
public:
    static TCPEstablished *Instance();
    virtual ~TCPEstablished();

    virtual void Transmit(TCPConnection *tcp, TCPOctetStream *stream);
    virtual void Close(TCPConnection *tcp);

private:
    TCPEstablished();
};

#endif // TCPESTABLISHED_H
