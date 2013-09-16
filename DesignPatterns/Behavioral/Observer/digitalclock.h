#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include "widget.h"
#include "observer.h"

class ClockTimer;
class DigitalClock : public Widget, public Observer
{
public:
    DigitalClock(ClockTimer *timer);
    virtual ~DigitalClock();

    virtual void Update(Subject *theChangedSubject);
    virtual void Draw();

private:
    ClockTimer *m_subject;
};

#endif // DIGITALCLOCK_H
