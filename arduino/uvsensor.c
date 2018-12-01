/*
	UViolet the harmful UV sensor
	
	by Nicolle Santana Amorim Ramos
	and refatored by Douglas S. Lacerda
*/

#define ANALOG A1
#define SOUND_PIN 13

void setup() {
	Serial.begin(115200);
	pinMode(ANALOG, INPUT);
	pinMode(SOUND_PIN, OUTPUT);
}

void loop() {
	delay(1000);

	if(detectHarmfulUv())
		turnAlarmOn();
	else
		turnAlarmOff();
}

int detectHarmfulUv() {
	int raw_value = analogRead(ANALOG);
	int mV = (raw_value * (5.0 / 1023.0) ) * 100;

	if(mV < 330) // indice prejudicial
		return 1;  
	return 0;
}


void turnAlarmOn() {
	tone(SOUND_PIN, 500);
	delay(1000);
}

void turnAlarmOff() {
	noTone(SOUND_PIN);
}
