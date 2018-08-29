// circuit => https://www.tinkercad.com/things/gECXrSXkOdp-surprising-bruticus/editel?sharecode=RTPpU34cS4ieCKEW11C045D5ivhjH4heDrvQ7ocHbEM=

const int pins[] = {2,3,4,5,6,7,8};

void writeA(){
  turnOff();
  int pins[] = {2,3,4,6,7,8};
  int len = sizeof(pins) / sizeof(int);
  for (int i = 0; i < len; ++i)
  	digitalWrite(pins[i], LOW);
}

void writeO(){
  turnOff();
  int pins[] = {2,3,4,5,6,7};
  int len = sizeof(pins) / sizeof(int);
  for (int i = 0; i < len; ++i)
  	digitalWrite(pins[i], LOW);
}

void writeL(){
  turnOff();
  int pins[] = {1,5,6,7};
  int len = sizeof(pins) / sizeof(int);
  for (int i = 0; i < len; ++i)
  	digitalWrite(pins[i], LOW);
}

void turnOff(){
  int len = sizeof(pins) / sizeof(int);
  for (int i = 0; i < len; ++i)
  	digitalWrite(pins[i], HIGH);
}

void setup()
{
  int len = sizeof(pins) / sizeof(int);
  for (int i = 0; i < len; ++i)
  	pinMode(pins[i], OUTPUT);
}

void loop()
{
  writeO();
  delay(1000);
  writeL();
  delay(1000);
  writeA();
  delay(2000);
}
