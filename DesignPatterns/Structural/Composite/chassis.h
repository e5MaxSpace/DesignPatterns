#ifndef CHASSIS_H
#define CHASSIS_H

#include "compositeequipment.h"

class Chassis : public CompositeEquipment
{
public:
    explicit Chassis(std::string &name);
    virtual ~Chassis();
};

#endif // CHASSIS_H
