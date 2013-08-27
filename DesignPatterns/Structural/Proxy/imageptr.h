#ifndef IMAGEPTR_H
#define IMAGEPTR_H

#include <string>

class Image;
class ImagePtr
{
public:
    explicit ImagePtr(const std::string &fileName);
    virtual ~ImagePtr();

    virtual Image* operator ->();
    virtual Image& operator *();

private:
    Image *LoadImage();

private:
    Image *m_image;
    const std::string m_fileName;
};

#endif // IMAGEPTR_H
