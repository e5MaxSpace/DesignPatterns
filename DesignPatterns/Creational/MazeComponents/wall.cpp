#include "wall.h"

Wall::Wall()
{
}

void Wall::Enter()
{
}

Wall *Wall::Clone() const
{
    return new Wall(*this);
}
