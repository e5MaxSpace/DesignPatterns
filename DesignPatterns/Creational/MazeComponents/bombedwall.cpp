#include "bombedwall.h"

BombedWall::BombedWall()
{
}

BombedWall::BombedWall(const BombedWall &other)
    : Wall(other), m_bomb(other.m_bomb)
{

}

Wall *BombedWall::Clone() const
{
    return new BombedWall(*this);
}

bool BombedWall::HasBomb() const
{
    return m_bomb;
}
