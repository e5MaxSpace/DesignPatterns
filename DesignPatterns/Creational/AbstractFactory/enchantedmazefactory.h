#ifndef ENCHANTEDMAZEFACTORY_H
#define ENCHANTEDMAZEFACTORY_H

#include "mazefactory.h"

class Spell;
class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchantedMazeFactory();

    //virtual Maze* MakeMaze() const;
    //virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int roomNo) const;
    virtual Door* MakeDoor(Room *from, Room *to) const;

protected:
    Spell *CastSpell() const;
};

#endif // ENCHANTEDMAZEFACTORY_H
