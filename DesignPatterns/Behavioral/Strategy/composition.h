#ifndef COMPOSITION_H
#define COMPOSITION_H

class Compositor;
class Component;
class Composition // Context ¿‡
{
public:
    Composition(Compositor *compositor);
    void Repair();

private:
    Compositor *m_compositor;

    Component  *m_components;
    int m_componentCount;

    int m_lineWidth;

    int *m_lineBreaks;
    int m_lineCount;
};

#endif // COMPOSITION_H
