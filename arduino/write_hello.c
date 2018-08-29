// circuit => https://www.tinkercad.com/things/gECXrSXkOdp-surprising-bruticus/editel?sharecode=RTPpU34cS4ieCKEW11C045D5ivhjH4heDrvQ7ocHbEM=
// fiz isso no lugar de 'brincar com o audio' pois o PC do lab continuou sem audio mesmo depois de clicar na solução de problemas do windows

void writeA()
{
	turnOff();
	int pins[] = {2,3,4,6,7};
	int len = sizeof(pins) / sizeof(int);
	for (int i = 0; i < len; ++i)
		digitalWrite(pins[i], LOW);
}

void writeO()
{
	turnOff();
	int pins[] = {2,3,4,5,6,7};
	int len = sizeof(pins) / sizeof(int);
	for (int i = 0; i < len; ++i)
		digitalWrite(pins[i], LOW);
}

void writeL()
{
	turnOff();
	int pins[] = {1,5,6,7};
	int len = sizeof(pins) / sizeof(int);
	for (int i = 0; i < len; ++i)
		digitalWrite(pins[i], LOW);
}

void turnOff()
{
	for(int i = 2; i < 9; ++i)
		digitalWrite(i,HIGH);
}

void setup()
{
	int pins[] = {1,2,3,4,5,6,7};
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
