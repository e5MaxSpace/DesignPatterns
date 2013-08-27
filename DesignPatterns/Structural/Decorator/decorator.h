#ifndef DECORATOR_H
#define DECORATOR_H

#include "visualcomponent.h"

class Decorator : public VisualComponent
{
public:
    Decorator(VisualComponent *component);

    virtual void Draw();
    virtual void Resize();

private:
    VisualComponent *m_component;
};

#endif // DECORATOR_H
