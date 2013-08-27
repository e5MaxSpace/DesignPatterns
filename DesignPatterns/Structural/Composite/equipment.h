#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>

typedef double Currency;
class Equipment
{
public:
    virtual ~Equipment();

    std::string Name() const;

    virtual int Power() const;
    virtual Currency NetPrice() const;
    virtual Currency DiscountPrice() const;

    virtual void Add(Equipment *eq);
    virtual void Remove(Equipment *eq);

protected:
    explicit Equipment(const std::string &name);

private:
    std::string m_name;


};

#endif // EQUIPMENT_H
