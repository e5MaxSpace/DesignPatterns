#include "room.h"
#include "assert.h"

Room::Room(int roomNo)
    : m_RoomNumber(roomNo)
{
}

MapSite *Room::GetSide(Room::Direction direction) const
{
    assert(direction != DirectionCount);
    return m_MapSite[direction];
}

void Room::SetSide(Room::Direction direction, MapSite *mapSite)
{
    assert(direction != DirectionCount);
    m_MapSite[direction] = mapSite;
}

int Room::GetRoomNumber() const
{
    return m_RoomNumber;
}

void Room::Enter()
{
}
