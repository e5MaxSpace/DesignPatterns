#ifndef TEXCOMPOSITOR_H
#define TEXCOMPOSITOR_H

#include "compositor.h"

class TexCompositor : public Compositor
{
public:
    TexCompositor();

    virtual int Compose(Composition *context);
};

#endif // TEXCOMPOSITOR_H
