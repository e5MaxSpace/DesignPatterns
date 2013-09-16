#ifndef LISTBOX_H
#define LISTBOX_H

#include "m_widget.h"
#include <string>
#include <list>

class ListBox : public M_Widget
{
public:
    explicit ListBox(DialogDirector * director);

    virtual const std::string GetSelection();
    virtual void SetList(const std::list<std::string> &items);
    virtual void HandleMouse(MouseEvent &event);

    // ....
};

#endif // LISTBOX_H
