#include "floppydisk.h"

FloppyDisk::FloppyDisk(const std::string &name)
    : Equipment(name)
{
}

FloppyDisk::~FloppyDisk()
{
}

int FloppyDisk::Power() const
{
    return 180;
}

Currency FloppyDisk::NetPrice() const
{
    return 500.0;
}

Currency FloppyDisk::DiscountPrice() const
{
    return NetPrice() * 0.85;
}
