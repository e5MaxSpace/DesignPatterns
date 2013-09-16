#ifndef M_WIDGET_H
#define M_WIDGET_H

#include "mouseevent.h"

class DialogDirector;
class M_Widget
{
public:
    explicit M_Widget(DialogDirector * director);

    virtual void Changed();

    virtual void HandleMouse(MouseEvent &event);
    // ....

private:
    DialogDirector *m_director;
};

#endif // M_WIDGET_H
