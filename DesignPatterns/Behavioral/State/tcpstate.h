#ifndef TCPSTATE_H
#define TCPSTATE_H

class TCPOctetStream;
class TCPConnection;
class TCPState
{
public:
    virtual ~TCPState();

    virtual void Transmit(TCPConnection *tcp, TCPOctetStream *stream);
    virtual void ActiveOpen(TCPConnection *tcp);
    virtual void PassiveOpen(TCPConnection *tcp);

    virtual void Close(TCPConnection *tcp);
    virtual void Synchronize(TCPConnection *tcp);
    virtual void Acknowledge(TCPConnection *tcp);

    virtual void Send(TCPConnection *tcp);

protected:
    TCPState();
    void ChangeState(TCPConnection *tcp, TCPState *state);
};

#endif // TCPSTATE_H
