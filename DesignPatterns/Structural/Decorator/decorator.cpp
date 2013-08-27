#include "decorator.h"

Decorator::Decorator(VisualComponent *component)
    : m_component(component)
{
}

void Decorator::Draw()
{
    m_component->Draw();
}

void Decorator::Resize()
{
    m_component->Resize();
}
