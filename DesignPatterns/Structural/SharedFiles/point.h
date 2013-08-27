#ifndef POINT_H
#define POINT_H

#include <list>
#include <iostream>

typedef double Coord;
class Point
{
public:
    static Point Zero;
public:
    Point(Coord x, Coord y);

    Coord m_x;
    Coord m_y;
};

typedef std::list<Point> PointList;

inline bool operator == (const Point &p1, const Point &p2)
{
    if ((p1.m_x == p2.m_x) && (p1.m_y == p2.m_y))
        return true;
    return false;
}

inline bool operator !=(const Point &p1, const Point &p2)
{
    return !(p1 == p2);
}

inline std::istream& operator >> (std::istream &is, Point &p)
{
    is >> p.m_x >> p.m_y;
    return is;
}

inline std::ostream &operator << (std::ostream &os, const Point &p)
{
    os << p.m_x << p.m_y;
    return os;
}

#endif // POINT_H
