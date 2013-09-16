#include "tcpstate.h"

#include "tcpconnection.h"

TCPState::TCPState()
{
}

TCPState::~TCPState()
{
}

void TCPState::Transmit(TCPConnection *tcp, TCPOctetStream *stream)
{
}

void TCPState::ActiveOpen(TCPConnection *tcp)
{
}

void TCPState::PassiveOpen(TCPConnection *tcp)
{
}

void TCPState::Close(TCPConnection *tcp)
{
}

void TCPState::Synchronize(TCPConnection *tcp)
{
}

void TCPState::Acknowledge(TCPConnection *tcp)
{
}

void TCPState::Send(TCPConnection *tcp)
{
}

void TCPState::ChangeState(TCPConnection *tcp, TCPState *state)
{
    tcp->ChangeState(state);
}
