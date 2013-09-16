#ifndef TCPLISTEN_H
#define TCPLISTEN_H

#include "tcpstate.h"

class TCPListen : public TCPState
{
public:
    static TCPListen *Instance();
    virtual ~TCPListen();

    virtual void Send(TCPConnection *tcp);

    // ....

private:
    TCPListen();
};

#endif // TCPLISTEN_H
