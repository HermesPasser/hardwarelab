#include "morse_base.h"

const int pin = 13;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  s(pin);
  o(pin);
  s(pin);
}
