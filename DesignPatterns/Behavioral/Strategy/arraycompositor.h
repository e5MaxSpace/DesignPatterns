#ifndef ARRAYCOMPOSITOR_H
#define ARRAYCOMPOSITOR_H

#include "compositor.h"

class ArrayCompositor : public Compositor
{
public:
    ArrayCompositor(int interval);

    virtual int Compose(Composition *context);
};

#endif // ARRAYCOMPOSITOR_H
