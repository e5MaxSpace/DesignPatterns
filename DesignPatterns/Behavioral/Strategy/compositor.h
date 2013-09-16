#ifndef COMPOSITOR_H
#define COMPOSITOR_H

class Composition;
class Compositor // Strategy ����
{
public:
    virtual ~Compositor();

    virtual int Compose(Composition *context) = 0;

protected:
    Compositor();
};

#endif // COMPOSITOR_H
