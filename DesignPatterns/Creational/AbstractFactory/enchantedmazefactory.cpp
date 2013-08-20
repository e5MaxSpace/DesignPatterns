#include "enchantedmazefactory.h"

#include "spell.h"
#include "enchantedroom.h"
#include "doorneedingspell.h"

EnchantedMazeFactory::EnchantedMazeFactory()
{
}

Room *EnchantedMazeFactory::MakeRoom(int roomNo) const
{
    return new EnchantedRoom(roomNo, CastSpell());
}

Door *EnchantedMazeFactory::MakeDoor(Room *from, Room *to) const
{
    return new DoorNeedingSpell(from, to);
}

Spell *EnchantedMazeFactory::CastSpell() const
{
    return new Spell();
}
