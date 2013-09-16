#include "tcpconnection.h"

#include "tcpclosed.h"

TCPConnection::TCPConnection()
{
    m_state = TCPClosed::Instance();
}

void TCPConnection::ActiveOpen()
{
    m_state->ActiveOpen(this);
}

void TCPConnection::PassiveOpen()
{
    m_state->PassiveOpen(this);
}

void TCPConnection::Close()
{
    m_state->Close(this);
}

void TCPConnection::Send()
{
    m_state->Send(this);
}

void TCPConnection::Acknowledge()
{
    m_state->Acknowledge(this);
}

void TCPConnection::Synchronize()
{
    m_state->Synchronize(this);
}

void TCPConnection::ProcessOctet(TCPOctetStream *stream)
{
}

void TCPConnection::ChangeState(TCPState *state)
{
    m_state = state;
}
