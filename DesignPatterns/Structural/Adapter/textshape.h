#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "shape.h"
#include "textview.h"

class TextShape_C : public Shape, private TextView
{
public:
    TextShape_C();

    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual Manipulator *CreateManipulator() const;

    virtual bool IsEmpty() const;

};

class TextShape_O : public Shape
{
public:
    explicit TextShape_O(TextView *text);
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual Manipulator *CreateManipulator() const;

    virtual bool IsEmpty() const;

private:
    TextView *m_text;
};

#endif // TEXTSHAPE_H
