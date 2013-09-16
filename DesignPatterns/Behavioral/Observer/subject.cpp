#include "subject.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::Attach(Observer *observer)
{
    m_observers.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
    m_observers.remove(observer);
}

void Subject::Notify()
{
    std::list<Observer *>::const_iterator it = m_observers.begin();
    for (; it != m_observers.end(); ++it)
    {
        (*it)->Update(this);
    }
}
