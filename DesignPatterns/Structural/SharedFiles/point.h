#ifndef POINT_H
#define POINT_H

#include <list>

typedef double Coord;
class Point
{
public:
    Point(Coord x, Coord y);

    Coord m_x;
    Coord m_y;
};

typedef std::list<Point> PointList;

#endif // POINT_H
