#ifndef MAZEPROTOTYPEFACTORY_H
#define MAZEPROTOTYPEFACTORY_H

#include "mazefactory.h"

class Maze;
class Wall;
class Room;
class Door;
class MazePrototypeFactory : public MazeFactory
{
public:
    MazePrototypeFactory(Maze *maze, Wall *wall, Room *room, Door *door);

    //virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    //virtual Room* MakeRoom(int roomNo) const;
    virtual Door* MakeDoor(Room *from, Room *to) const;

private:
    Maze *m_maze;
    Wall *m_wall;
    Room *m_room;
    Door *m_door;
};

#endif // MAZEPROTOTYPEFACTORY_H
