#include "m_widget.h"

#include "dialogdirector.h"

M_Widget::M_Widget(DialogDirector *director)
    : m_director(director)
{
}

void M_Widget::Changed()
{
    m_director->WidgetChanged(this);
}

void M_Widget::HandleMouse(MouseEvent &event)
{
}
