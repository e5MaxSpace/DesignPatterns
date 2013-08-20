#include "enchantedmazecreator.h"

#include "enchantedroom.h"
#include "doorneedingspell.h"
#include "spell.h"

EnchantedMazeCreator::EnchantedMazeCreator()
{
}

Room *EnchantedMazeCreator::MakeRoom(int roomNo) const
{
    return new EnchantedRoom(roomNo, CastSpell());
}

Door *EnchantedMazeCreator::MakeDoor(Room *from, Room *to) const
{
    return new DoorNeedingSpell(from, to);
}

Spell *EnchantedMazeCreator::CastSpell() const
{
    return new Spell();
}
