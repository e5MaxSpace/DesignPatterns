#include "door.h"

#include "room.h"

Door::Door()
{
}

Door::Door(const Door &other)
{
    m_Room1 = other.m_Room1;
    m_Room2 = other.m_Room2;
}

Door::Door(Room *from, Room *to)
    : m_Room1(from), m_Room2(to), m_isOpen(false)
{
}

void Door::Initialize(Room *from, Room *to)
{
    m_Room1 = from;
    m_Room2 = to;
}

void Door::Enter()
{
}

bool Door::isOpen() const
{
    return m_isOpen;
}

Room *Door::OtherSideFrom(Room *from)
{
}

Door *Door::Clone() const
{
    return new Door(*this);
}
