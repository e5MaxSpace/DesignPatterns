#ifndef BORDERDECORATOR_H
#define BORDERDECORATOR_H

#include "decorator.h"

class BorderDecorator : public Decorator
{
public:
    explicit BorderDecorator(VisualComponent *component, int borderWidth);

    virtual void Draw();

private:
    void DrawBorder();

private:
    int m_borderWidth;
};

#endif // BORDERDECORATOR_H
