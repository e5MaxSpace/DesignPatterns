#include "bombedmazecreator.h"

#include "roomwithabomb.h"
#include "bombedwall.h"

BombedMazeCreator::BombedMazeCreator()
{
}

Room *BombedMazeCreator::MakeRoom(int roomNo) const
{
    return new RoomWithABomb(roomNo);
}

Wall *BombedMazeCreator::MakeWall() const
{
    return new BombedWall();
}
