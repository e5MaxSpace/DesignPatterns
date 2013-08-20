#include "maze.h"
#include "room.h"

Maze::Maze()
{
}

void Maze::AddRoom(Room *room)
{
    m_rooms[room->GetRoomNumber()] = room;
}

Room *Maze::RoomNo(int roomNo) const
{
    return m_rooms.find(roomNo)->second;
}
