#ifndef TCPCONNECTION_H
#define TCPCONNECTION_H

// Context
class TCPOctetStream;
class TCPState;
class TCPConnection
{
public:
    TCPConnection();

    void ActiveOpen();
    void PassiveOpen();
    void Close();
    void Send();
    void Acknowledge();
    void Synchronize();

    void ProcessOctet(TCPOctetStream *stream);

private:
    friend class TCPState;
    void ChangeState(TCPState *state);

private:
    TCPState *m_state;
};

#endif // TCPCONNECTION_H
