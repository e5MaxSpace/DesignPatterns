#include "shape.h"

Shape::Shape()
{
}

Shape::~Shape()
{
}

void Shape::BoundingBox(Point &bottomLeft, Point &topRight) const
{
}

Manipulator *Shape::CreateManipulator() const
{
    return 0;
}
