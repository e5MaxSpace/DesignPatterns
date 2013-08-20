#include "mazefactory.h"

#include "maze.h"
#include "wall.h"
#include "room.h"
#include "door.h"

MazeFactory::MazeFactory()
{
}

Maze *MazeFactory::MakeMaze() const
{
    return new Maze();
}

Wall *MazeFactory::MakeWall() const
{
    return new Wall();
}

Room *MazeFactory::MakeRoom(int roomNo) const
{
    return new Room(roomNo);
}

Door *MazeFactory::MakeDoor(Room *from, Room *to) const
{
    return new Door(from, to);
}
