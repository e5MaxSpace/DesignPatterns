#include "bombedmazefactory.h"

#include "bombedwall.h"
#include "roomwithabomb.h"

BombedMazeFactory::BombedMazeFactory()
{
}

Wall *BombedMazeFactory::MakeWall() const
{
    return new BombedWall();
}

Room *BombedMazeFactory::MakeRoom(int roomNo) const
{
    return new RoomWithABomb(roomNo);
}
