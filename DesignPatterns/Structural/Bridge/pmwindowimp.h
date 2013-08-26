#ifndef PMWINDOWIMP_H
#define PMWINDOWIMP_H

#include "windowimp.h"

class PMWindowImp : public WindowImp
{
public:
    PMWindowImp();

    virtual void DeviceRect(Coord left, Coord bottom, Coord right, Coord top);

private:
    //HPS m_hps;
};

#endif // PMWINDOWIMP_H
