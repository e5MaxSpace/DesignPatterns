#ifndef BOMBEDMAZECRETOR_H
#define BOMBEDMAZECRETOR_H

#include "mazecreator.h"

class BombedMazeCreator : public MazeCreator
{
public:
    BombedMazeCreator();

private:
    // override factory methods
    //virtual Maze *MakeMaze() const;
    virtual Room *MakeRoom(int roomNo) const;
    virtual Wall *MakeWall() const;
    //virtual Door *MakeDoor(Room *from, Room *to) const;

};

#endif // BOMBEDMAZECRETOR_H
