#include "entryfield.h"

EntryField::EntryField(DialogDirector *director)
    : M_Widget(director)
{
}

void EntryField::SetText(const std::string text)
{
}

const std::string EntryField::GetText()
{
    return "EntryField";
}

void EntryField::HandleMouse(MouseEvent &event)
{
}
