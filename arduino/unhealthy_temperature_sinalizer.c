// circuit =>https://www.tinkercad.com/things/gnM8FJTwbKJ-brilliant-turing-jaiks/editel?tenant=circuits?sharecode=Y2DWwbnIWrZn-Rbs1VujYzzFDgD_B09RZmExtGfYBS4=

const int piezoPin = 7;
const int sensosPin = 0;

float temperatureC()
{
  float voltage = (analogRead(sensosPin) * 5.0) / 1024.0;
  return (voltage - 0.5) * 100; 
}

void setup()
{
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  float temp = temperatureC();
  
  if (temp > 41)
  {
      tone(piezoPin, 3000, 500);
      delay(1000); 
  }
}
