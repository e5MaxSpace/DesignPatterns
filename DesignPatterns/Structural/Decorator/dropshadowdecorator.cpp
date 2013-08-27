#include "dropshadowdecorator.h"

DropShadowDecorator::DropShadowDecorator(VisualComponent *componet)
    : Decorator(componet)
{
}

void DropShadowDecorator::Draw()
{
    Decorator::Draw();
    DrawShadow();
}

void DropShadowDecorator::DrawShadow()
{
}
