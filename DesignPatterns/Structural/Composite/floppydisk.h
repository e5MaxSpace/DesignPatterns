#ifndef FLOPPYDISK_H
#define FLOPPYDISK_H

#include "equipment.h"

class FloppyDisk : public Equipment
{
public:
    explicit FloppyDisk(const std::string &name);
    virtual ~FloppyDisk();

    virtual int Power() const;
    virtual Currency NetPrice() const;
    virtual Currency DiscountPrice() const;

};

#endif // FLOPPYDISK_H
