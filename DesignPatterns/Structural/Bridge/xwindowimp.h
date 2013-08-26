#ifndef XWINDOWIMP_H
#define XWINDOWIMP_H

#include "windowimp.h"

class XWindowImp : public WindowImp
{
public:
    XWindowImp();

    virtual void DeviceRect(Coord left, Coord bottom, Coord right, Coord top);

private:
    //Display *m_display;
    //Drawable *m_draw;
    //GC m_gc;
};

#endif // XWINDOWIMP_H
