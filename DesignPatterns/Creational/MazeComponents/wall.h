#ifndef WALL_H
#define WALL_H

#include "mapsite.h"

class Wall : public MapSite
{
public:
    Wall();

    virtual void Enter();

    virtual Wall* Clone() const;
};

#endif // WALL_H
