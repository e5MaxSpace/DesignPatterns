#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include "visualcomponent.h"

class TextView_Decorated : public VisualComponent
{
public:
    TextView_Decorated();

    virtual void Draw();
    virtual void Resize();
};

#endif // TEXTVIEW_H
