#include "imageptr.h"

#include "image.h"

static Image * LoadAnImageFile(const std::string &fileName)
{
    return new Image(fileName);
}

ImagePtr::ImagePtr(const std::string &fileName)
    : m_image(0), m_fileName(fileName)
{
}

ImagePtr::~ImagePtr()
{
}

Image *ImagePtr::operator ->()
{
    return LoadImage();
}

Image &ImagePtr::operator *()
{
    return *LoadImage();
}

Image *ImagePtr::LoadImage()
{
    if (m_image == 0)
    {
        m_image = LoadAnImageFile(m_fileName);
    }

    return m_image;
}
