#include "scrolldecorator.h"

ScrollDecorator::ScrollDecorator(VisualComponent *component)
    : Decorator(component)
{
}

void ScrollDecorator::Draw()
{
    Decorator::Draw();
    AddScrollBar();
}

void ScrollDecorator::AddScrollBar()
{
}
