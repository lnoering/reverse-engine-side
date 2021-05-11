#ifndef NSE_ANALOG_CPP
#define NSE_ANALOG_CPP

#include "NSE-Analog.h"

Analog::Analog(uint8_t pin)
{
    // _bme = new Adafruit_BME280;
    _pin = pin;
    
}

Analog::~Analog()
{

}

void Analog::setup()
{


}

#endif //NSE_ANALOG_CPP