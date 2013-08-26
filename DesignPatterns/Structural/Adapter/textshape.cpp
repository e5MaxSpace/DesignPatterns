#include "textshape.h"
#include "manipulator.h"

TextShape_C::TextShape_C()
{
}

void TextShape_C::BoundingBox(Point &bottomLeft, Point &topRight) const
{
    Coord bottom, left, width, height;
    GetOrigin(left, bottom);
    GetExtent(width, height);

    bottomLeft.m_x = left;
    bottomLeft.m_y = bottom;

    topRight.m_x = left + width;
    topRight.m_y = bottom + height;
}

Manipulator *TextShape_C::CreateManipulator() const
{
    return new TextManipulator(this);
}

bool TextShape_C::IsEmpty() const
{
    return TextView::IsEmpty();
}

// ====================
TextShape_O::TextShape_O(TextView *text) :
    m_text(text)
{
}

void TextShape_O::BoundingBox(Point &bottomLeft, Point &topRight) const
{
    Coord bottom, left, width, height;
    m_text->GetOrigin(left, bottom);
    m_text->GetExtent(width, height);

    bottomLeft.m_x = left;
    bottomLeft.m_y = bottom;

    topRight.m_x = left + width;
    topRight.m_y = bottom + height;
}

Manipulator *TextShape_O::CreateManipulator() const
{
    return new TextManipulator(this);
}

bool TextShape_O::IsEmpty() const
{
    return m_text->IsEmpty();
}
