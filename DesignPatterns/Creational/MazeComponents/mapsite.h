#ifndef MAPSITE_H
#define MAPSITE_H

class MapSite
{
public:
    MapSite();
    virtual ~MapSite();

    virtual void Enter() = 0;
};

#endif // MAPSITE_H
