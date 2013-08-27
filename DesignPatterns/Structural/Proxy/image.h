#ifndef IMAGE_H
#define IMAGE_H

#include "graphic.h"
#include <string>

class Image : public Graphic
{
public:
    explicit Image(const std::string &fileName);

    virtual void Draw(const Point &at);
    virtual void HandleMouse(Event &event);

    virtual const Point& GetExtent();

    virtual void Load(std::istream &from);
    virtual void Save(std::ostream &to);
};

#endif // IMAGE_H
