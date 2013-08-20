#ifndef DOORNEEDINGSPELL_H
#define DOORNEEDINGSPELL_H

#include "door.h"

class Room;
class DoorNeedingSpell : public Door
{
public:
    DoorNeedingSpell(Room *from ,Room *to);
};

#endif // DOORNEEDINGSPELL_H
