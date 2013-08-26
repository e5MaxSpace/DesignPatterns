#ifndef MANIPULATOR_H
#define MANIPULATOR_H

class Shape;
class Manipulator
{
public:
    Manipulator(const Shape * const shape);
    virtual ~Manipulator();
};

class TextManipulator : public Manipulator
{
public:
    TextManipulator(const Shape * const shape);
};

#endif // MANIPULATOR_H
