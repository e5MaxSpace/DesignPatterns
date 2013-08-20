#include "mazeprototypefactory.h"

#include "maze.h"
#include "door.h"
#include "wall.h"

MazePrototypeFactory::MazePrototypeFactory(Maze *maze, Wall *wall, Room *room, Door *door)
{
    m_maze = maze;
    m_wall = wall;
    m_room = room;
    m_door = door;
}

Wall *MazePrototypeFactory::MakeWall() const
{
    return m_wall->Clone();
}

Door *MazePrototypeFactory::MakeDoor(Room *from, Room *to) const
{
    Door *door = m_door->Clone();
    door->Initialize(from, to);

    return door;
}
