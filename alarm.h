#pragma once
#include "timeOfDay.h"

namespace KwakMinChae2449102
{
    class alarm
    {
        timeOfDay wakeTime;
        bool inActive;
    public: 
        alarm(timeOfDay t = timeOfDay{23,59}, bool a = false):wakeTime{t}, inActive{a}{}
        void print()
        {
            wakeTime.print();
            std::cout << "alarm is " << ((inActive) ? "on" : "off") << "\n";
            
        }
        const timeOfDay& getWakeTime() {return wakeTime;}
        void setWakeTime(const timeOfDay& t){wakeTime = t;}
    };
}
