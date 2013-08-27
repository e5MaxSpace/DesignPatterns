#ifndef IMAGEPROXY_H
#define IMAGEPROXY_H

#include "graphic.h"
#include "image.h"
#include <string>

class ImageProxy : public Graphic
{
public:
    explicit ImageProxy(const std::string &fileName);
    virtual ~ImageProxy();

    virtual void Draw(const Point &at);
    virtual void HandleMouse(Event &event);

    virtual const Point& GetExtent();

    virtual void Load(std::istream &from);
    virtual void Save(std::ostream &to);

protected:
    Image *GetImage();

private:
    Image *m_image;
    Point m_extent;
    std::string m_fileName;
};

#endif // IMAGEPROXY_H
