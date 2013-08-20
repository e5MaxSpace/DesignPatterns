#include "standardmazebuilder.h"

#include "maze.h"
#include "wall.h"
#include "door.h"

StandardMazeBuilder::StandardMazeBuilder()
    : m_currentMaze(0)
{
}

void StandardMazeBuilder::BuildMaze()
{
    m_currentMaze = new Maze();
}

void StandardMazeBuilder::BuildRoom(int roomNo)
{
    if (m_currentMaze->RoomNo(roomNo) == NULL)
    {
        Room *room = new Room(roomNo);

        room->SetSide(Room::East, new Wall());
        room->SetSide(Room::South, new Wall());
        room->SetSide(Room::West, new Wall());
        room->SetSide(Room::North, new Wall());

        m_currentMaze->AddRoom(room);
    }
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo)
{
    Room *r1 = m_currentMaze->RoomNo(roomFrom);
    Room *r2 = m_currentMaze->RoomNo(roomTo);

    Door *door = new Door(r1, r2);

    r1->SetSide(CommononWall(r1, r2), door);
    r2->SetSide(CommononWall(r2, r1), door);
}

Room::Direction StandardMazeBuilder::CommononWall(Room *from, Room *to)
{
}
