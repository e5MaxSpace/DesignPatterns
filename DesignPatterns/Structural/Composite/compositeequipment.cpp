#include "compositeequipment.h"

CompositeEquipment::CompositeEquipment(const std::string &name)
    : Equipment(name)
{
}

CompositeEquipment::~CompositeEquipment()
{
}

int CompositeEquipment::Power() const
{
    int total = 0;
    std::list<Equipment *>::const_iterator it = m_equipments.begin();
    for ( ; it != m_equipments.end(); ++it)
    {
        total += (*it)->Power();
    }

    return total;
}

Currency CompositeEquipment::NetPrice() const
{
    Currency total = 0.0;
    std::list<Equipment *>::const_iterator it = m_equipments.begin();
    for ( ; it != m_equipments.end(); ++it)
    {
        total += (*it)->NetPrice();
    }

    return total;
}

Currency CompositeEquipment::DiscountPrice() const
{
    Currency total = 0.0;
    std::list<Equipment *>::const_iterator it = m_equipments.begin();
    for ( ; it != m_equipments.end(); ++it)
    {
        total += (*it)->DiscountPrice();
    }

    return total;
}

void CompositeEquipment::Add(Equipment *eq)
{
    m_equipments.push_back(eq);
}

void CompositeEquipment::Remove(Equipment *eq)
{
    m_equipments.remove(eq);
}
