#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include "widget.h"
#include "observer.h"

class ClockTimer;
class AnalogClock : public Widget, public Observer
{
public:
    AnalogClock(ClockTimer *timer);

    virtual void Update(Subject *theChangedSubject);
    virtual void Draw();

private:
    ClockTimer *m_subject;
};

#endif // ANALOGCLOCK_H
