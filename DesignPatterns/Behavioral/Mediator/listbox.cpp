#include "listbox.h"

ListBox::ListBox(DialogDirector *director)
    : M_Widget(director)
{
}

const std::string ListBox::GetSelection()
{
    return "currentItemName";
}

void ListBox::SetList(const std::list<std::string> &items)
{
}

void ListBox::HandleMouse(MouseEvent &event)
{
}
