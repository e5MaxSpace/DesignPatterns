#include <iostream>

#include "digitalclock.h"
#include "analogclock.h"
#include "clocktimer.h"

using namespace std;

int main()
{
    ClockTimer *timer = new ClockTimer();
    DigitalClock *digital = new DigitalClock(timer);
    AnalogClock *analog = new AnalogClock(timer);

    cout << "Hello World!" << endl;
    return 0;
}

