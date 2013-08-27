#include "point.h"

Point Point::Zero = Point(0.0, 0.0);
Point::Point(Coord x, Coord y)
    : m_x(x), m_y(y)
{
}
