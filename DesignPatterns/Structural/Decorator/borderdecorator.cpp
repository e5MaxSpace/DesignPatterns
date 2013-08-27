#include "borderdecorator.h"

BorderDecorator::BorderDecorator(VisualComponent *component, int borderWidth)
    : Decorator(component)
{
}

void BorderDecorator::Draw()
{
    Decorator::Draw();
    DrawBorder();
}

void BorderDecorator::DrawBorder()
{
}
