#ifndef BOMBEDWALL_H
#define BOMBEDWALL_H

#include "wall.h"

class BombedWall : public Wall
{
public:
    BombedWall();
    BombedWall(const BombedWall &other);

    virtual Wall *Clone() const;

    bool HasBomb() const;

private:
    bool m_bomb;
};

#endif // BOMBEDWALL_H
