#ifndef TCPCLOSED_H
#define TCPCLOSED_H

#include "tcpstate.h"

class TCPClosed : public TCPState
{
public:
    static TCPClosed* Instance();
    virtual ~TCPClosed();

    virtual void ActiveOpen(TCPConnection *tcp);
    virtual void PassiveOpen(TCPConnection *tcp);

    // ....

private:
    TCPClosed();
};

#endif // TCPCLOSED_H
