#include "manipulator.h"

Manipulator::Manipulator(const Shape *const shape)
{
}

Manipulator::~Manipulator()
{
}

// ===============
TextManipulator::TextManipulator(const Shape *const shape)
    : Manipulator(shape)
{
}
