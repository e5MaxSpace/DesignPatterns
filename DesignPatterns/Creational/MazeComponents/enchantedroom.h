#ifndef ENCHANTEDROOM_H
#define ENCHANTEDROOM_H

#include "room.h"

class Spell;
class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int roomNo, Spell *spell);
};

#endif // ENCHANTEDROOM_H
