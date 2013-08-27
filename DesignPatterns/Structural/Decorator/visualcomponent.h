#ifndef VISUALCOMPONENT_H
#define VISUALCOMPONENT_H

class VisualComponent
{
public:
    VisualComponent();
    virtual ~VisualComponent();

    virtual void Draw() = 0;
    virtual void Resize() = 0;
};

#endif // VISUALCOMPONENT_H
