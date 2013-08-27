#ifndef DROPSHADOWDECORATOR_H
#define DROPSHADOWDECORATOR_H

#include "decorator.h"

class DropShadowDecorator : public Decorator
{
public:
    DropShadowDecorator(VisualComponent *componet);

    virtual void Draw();

private:
    void DrawShadow();
};

#endif // DROPSHADOWDECORATOR_H
