#ifndef SIMPLECOMPOSITOR_H
#define SIMPLECOMPOSITOR_H

#include "compositor.h"

class SimpleCompositor : public Compositor
{
public:
    SimpleCompositor();

    virtual int Compose(Composition *context);
};

#endif // SIMPLECOMPOSITOR_H
