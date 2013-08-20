#ifndef DOOR_H
#define DOOR_H

#include "mapsite.h"

class Room;
class Door : public MapSite
{
public:
    Door();
    Door(const Door &other);
    explicit Door(Room *from, Room *to);

    void Initialize(Room *from, Room *to);

    virtual void Enter();

    bool isOpen() const;
    Room *OtherSideFrom(Room *from);

    virtual Door *Clone() const;

private:
    Room *m_Room1;
    Room *m_Room2;
    bool m_isOpen;
};

#endif // DOOR_H
