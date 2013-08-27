#ifndef SCROLLDECORATOR_H
#define SCROLLDECORATOR_H

#include "decorator.h"

class ScrollDecorator : public Decorator
{
public:
    ScrollDecorator(VisualComponent *component);

    virtual void Draw();

private:
    void AddScrollBar();
};

#endif // SCROLLDECORATOR_H
