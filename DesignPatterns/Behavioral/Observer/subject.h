#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <list>

class Subject
{
public:
    virtual ~Subject();

    virtual void Attach(Observer *observer);
    virtual void Detach(Observer *observer);
    virtual void Notify();

protected:
    Subject();

private:
    std::list<Observer *> m_observers;
};

#endif // SUBJECT_H
