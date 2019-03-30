int bottone = 12;
int buzzer = 2;
int verde = 8;
int rosso = 7;
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
    digitalWrite(rosso,LOW);
    digitalWrite(verde,LOW);
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
  delay(random(1000,5000));
    TempoBuzzer = 0;
    digitalWrite(buzzer, HIGH);
    while(digitalRead(bottone) == LOW)
    {
      TempoBuzzer ++;
      delay(1);
    }  
    digitalWrite(buzzer, LOW);
  Serial.println(TempoBuzzer );   
  if(TempoBuzzer > 200)
  {
    digitalWrite(rosso,HIGH);
  }
  else
  {
    digitalWrite(verde,HIGH);
  }
  delay(2000);
  digitalWrite(verde,LOW);
  digitalWrite(rosso,LOW);
}
}
