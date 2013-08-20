#ifndef ENCHANTEDMAZECREATOR_H
#define ENCHANTEDMAZECREATOR_H

#include "mazecreator.h"

class Spell;
class EnchantedMazeCreator : public MazeCreator
{
public:
    EnchantedMazeCreator();

private:
    // override factory methods
    //virtual Maze *MakeMaze() const;
    virtual Room *MakeRoom(int roomNo) const;
    //virtual Wall *MakeWall() const;
    virtual Door *MakeDoor(Room *from, Room *to) const;

    Spell *CastSpell() const;
};

#endif // ENCHANTEDMAZECREATOR_H
