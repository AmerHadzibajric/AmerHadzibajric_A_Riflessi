int bottone = 12;
int buzzer = 2;
int rosso = 8;
int verde = 7;
int blu = 4;
int TempoBuzzer = 0;
int TempoLed = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(blu,OUTPUT);
pinMode(rosso,OUTPUT);
pinMode(bottone, INPUT);
pinMode(verde,OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(bottone) == HIGH)
  {
    TempoLed = 0;
    delay(random(1000,5000));
    digitalWrite(blu, HIGH);
    while(digitalRead(bottone) == LOW)
    {
      TempoLed ++;
      delay(1);
    }  
    digitalWrite(blu, LOW);
  Serial.println(TempoLed);    
  }
}

  
