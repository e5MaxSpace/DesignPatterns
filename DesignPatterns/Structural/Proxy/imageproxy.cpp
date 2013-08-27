#include "imageproxy.h"

ImageProxy::ImageProxy(const std::string &fileName)
    : m_image(0),
      m_extent(Point::Zero),
      m_fileName(fileName)
{
}

ImageProxy::~ImageProxy()
{
}

void ImageProxy::Draw(const Point &at)
{
    GetImage()->Draw(at);
}

void ImageProxy::HandleMouse(Event &event)
{
    GetImage()->HandleMouse(event);
}

const Point &ImageProxy::GetExtent()
{
    if (m_extent == Point::Zero)
    {
        m_extent = GetImage()->GetExtent();
    }

    return m_extent;
}

void ImageProxy::Load(std::istream &from)
{
    from >> m_extent >> m_fileName;
}

void ImageProxy::Save(std::ostream &to)
{
    to << m_extent << m_fileName;
}

Image *ImageProxy::GetImage()
{
    if (m_image == 0)
    {
        m_image = new Image(m_fileName);
    }

    return m_image;
}
