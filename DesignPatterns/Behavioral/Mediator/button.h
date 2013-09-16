#ifndef BUTTON_H
#define BUTTON_H

#include "m_widget.h"
#include <string>

class Button : public M_Widget
{
public:
    explicit Button(DialogDirector * director);

    virtual void SetText(const std::string text);
    virtual void HandleMouse(MouseEvent &event);
};

#endif // BUTTON_H
