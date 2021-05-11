#ifndef NSE_ANALOG_H
#define NSE_ANALOG_H

#include "Arduino.h"

class Analog
{
    public:
        Analog(uint8_t pin);
        ~Analog();

        void setup();

    protected:

    private:
        float _value;
        uint8_t _pin;
};

#endif //NSE_ANALOG_H