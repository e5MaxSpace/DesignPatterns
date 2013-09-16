#include "digitalclock.h"

#include "clocktimer.h"

DigitalClock::DigitalClock(ClockTimer *timer)
    : m_subject(timer)
{
    m_subject->Attach(this);
}

DigitalClock::~DigitalClock()
{
    m_subject->Detach(this);
}

void DigitalClock::Update(Subject *theChangedSubject)
{
    if (theChangedSubject == m_subject)
    {
        Draw();
    }
}

void DigitalClock::Draw()
{
    int hour = m_subject->GetHour();
    int minute = m_subject->GetMinute();
    int second = m_subject->GetSecond();

    // draw the digital clock
    // ....
}
