#ifndef ENTRYFIELD_H
#define ENTRYFIELD_H

#include "m_widget.h"
#include <string>

class EntryField : public M_Widget
{
public:
    explicit EntryField(DialogDirector * director);

    virtual void SetText(const std::string text);
    virtual const std::string GetText();
    virtual void HandleMouse(MouseEvent &event);
};

#endif // ENTRYFIELD_H
