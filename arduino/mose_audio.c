#include "morse_base.h"

int portSpeak(9);

void setup()
{
  pinMode(portSpeak, OUTPUT);
}

void loop()
{
  s(portSpeak);
  o(portSpeak);
  s(portSpeak);
}
