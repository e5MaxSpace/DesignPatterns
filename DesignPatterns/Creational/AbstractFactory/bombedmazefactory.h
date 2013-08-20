#ifndef BOMBEDMAZEFACTORY_H
#define BOMBEDMAZEFACTORY_H

#include "mazefactory.h"

class BombedMazeFactory : public MazeFactory
{
public:
    BombedMazeFactory();

    //virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int roomNo) const;
    //virtual Door* MakeDoor(Room *from, Room *to) const;
};

#endif // BOMBEDMAZEFACTORY_H
