#include "button.h"

Button::Button(DialogDirector *director)
    : M_Widget(director)
{
}

void Button::SetText(const std::string text)
{
}

void Button::HandleMouse(MouseEvent &event)
{
    // ....
    Changed();
}
