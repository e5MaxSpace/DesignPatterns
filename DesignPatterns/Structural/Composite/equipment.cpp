#include "equipment.h"

Equipment::Equipment(const std::string &name)
    : m_name(name)
{
}

Equipment::~Equipment()
{
}

std::string Equipment::Name() const
{
    return m_name;
}

int Equipment::Power() const
{
    return 0;
}

Currency Equipment::NetPrice() const
{
    return 0.0;
}

Currency Equipment::DiscountPrice() const
{
    return 0.0;
}

void Equipment::Add(Equipment *eq)
{
    (void)eq;
}

void Equipment::Remove(Equipment *eq)
{
    (void)eq;
}
