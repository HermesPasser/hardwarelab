#ifndef _MORSE_BASE
#define _MORSE_BASE

const int dit = 200;
const int dah = 500;

void s(int pin)
{
  digitalWrite(pin, HIGH);
  delay(dit);
  digitalWrite(pin, LOW);
  delay(dit);
  digitalWrite(pin, HIGH);
  delay(dit);
}

void o(int pin)
{
  digitalWrite(pin, LOW);
  delay(dah);
  digitalWrite(pin, HIGH);
  delay(dah);
  digitalWrite(pin, LOW);
  delay(dah);
}
#endif
