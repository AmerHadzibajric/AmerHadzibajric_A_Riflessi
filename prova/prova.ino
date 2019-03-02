int beep = 5;
int rosso = 2;
int verde = 4;
int blu = 6;
int Random;
int brightnessred = 150;
int brightnessblu = 150;
void setup() {
  // put your setup code here, to run once:
pinMode(beep, OUTPUT);
pinMode(blu, OUTPUT);
pinMode(verde, OUTPUT);
pinMode(rosso, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(beep, HIGH);
delay (1000);
digitalWrite (beep, LOW);

}


void RandomSuono()
{
  
  Random = random (1000,5000);
}
