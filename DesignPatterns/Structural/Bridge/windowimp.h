#ifndef WINDOWIMP_H
#define WINDOWIMP_H

#include "../SharedFiles/point.h"

#include <string>

class WindowImp
{
public:
    virtual ~WindowImp();

    virtual void ImpTop() = 0;
    virtual void ImpBottom() = 0;
    virtual void ImpSetExtent(const Point& at) = 0;
    virtual void ImpSetOrigin(const Point& at) = 0;

    virtual void DeviceRect(Coord left, Coord bottom, Coord right, Coord top) = 0;
    virtual void DeviceText(const std::string& text, const Point& at) = 0;
    virtual void DeviceBitmap(const std::string &bitmapName, const Point& at) = 0;
    // lots more functions for drawing on windows....

protected:
    WindowImp();
};

#endif // WINDOWIMP_H
