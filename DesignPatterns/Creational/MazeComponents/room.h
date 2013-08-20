#ifndef ROOM_H
#define ROOM_H

#include "mapsite.h"

class Room : public MapSite
{
public:
    enum Direction {East, South, West, North, DirectionCount};

public:
    explicit Room(int roomNo);

    MapSite *GetSide(Direction direction) const;
    void SetSide(Direction direction, MapSite *mapSite);

    int GetRoomNumber() const;

    virtual void Enter();

private:
    MapSite *m_MapSite[DirectionCount];
    int m_RoomNumber;
};

#endif // ROOM_H
