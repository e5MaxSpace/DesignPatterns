#include "mazecreator.h"

#include "maze.h"
#include "room.h"
#include "door.h"
#include "wall.h"

MazeCreator::MazeCreator()
{
}

Maze *MazeCreator::CreateMaze()
{
    Maze *aMaze = MakeMaze();

    Room *r1 = MakeRoom(1);
    Room *r2 = MakeRoom(2);

    Door *door = MakeDoor(r1, r2);

    r1->SetSide(Room::East, door);
    r1->SetSide(Room::South, MakeWall());
    r1->SetSide(Room::West, MakeWall());
    r1->SetSide(Room::North, MakeWall());

    r2->SetSide(Room::East,  MakeWall());
    r2->SetSide(Room::South, MakeWall());
    r2->SetSide(Room::West, door);
    r2->SetSide(Room::North, MakeWall());

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    return aMaze;
}

Maze *MazeCreator::MakeMaze() const
{
    return new Maze();
}

Room *MazeCreator::MakeRoom(int roomNo) const
{
    return new Room(roomNo);
}

Wall *MazeCreator::MakeWall() const
{
    return new Wall();
}

Door *MazeCreator::MakeDoor(Room *from, Room *to) const
{
    return new Door(from, to);
}
