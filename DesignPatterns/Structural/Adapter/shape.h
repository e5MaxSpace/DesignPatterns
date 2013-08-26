#ifndef SHAPE_H
#define SHAPE_H

#include "../SharedFiles/point.h"

class Manipulator;
class Shape
{
public:
    Shape();
    virtual ~Shape();
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual Manipulator *CreateManipulator() const;
};

#endif // SHAPE_H
