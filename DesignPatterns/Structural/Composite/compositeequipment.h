#ifndef COMPOSITEEQUIPMENT_H
#define COMPOSITEEQUIPMENT_H

#include "equipment.h"
#include <list>

class CompositeEquipment : public Equipment
{
public:
    virtual ~CompositeEquipment();

    virtual int Power() const;
    virtual Currency NetPrice() const;
    virtual Currency DiscountPrice() const;

    virtual void Add(Equipment *eq);
    virtual void Remove(Equipment *eq);

protected:
    explicit CompositeEquipment(const std::string &name);

private:
    std::list<Equipment *> m_equipments;

};

#endif // COMPOSITEEQUIPMENT_H
