#include "analogclock.h"

#include "clocktimer.h"

AnalogClock::AnalogClock(ClockTimer *timer)
    : m_subject(timer)
{
    m_subject->Attach(this);
}

void AnalogClock::Update(Subject *theChangedSubject)
{
}

void AnalogClock::Draw()
{
}
