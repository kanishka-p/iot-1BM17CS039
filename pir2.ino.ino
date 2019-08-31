long unsigned int pause=5000;
boolean locklow=true;
int pirPin=2;
int ledPin=13;

void setup()
{
  Serial.begin(9600);
  pinMode(pirPin,INPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(pirPin,LOW);
  Serial.print("calliberating sensor");
  for (int i=0;i<caliberation;i++)
  {
    Serial.print(".");
    delay(1000);
    
  }
  Serial.println("down");
  Serial.println("sensor active");
  delay(50)
}
void loop()
{
  if (digitalRead(pirPin)==HIGH)
  {
    digitalWrite(ledPin,HIGH)
    if(locklow)
    {
      locklow=false;
      Serial.println("__")
      Serial.println("motion detected");
      Serial.print(millis()/1000);
      Serial.println("sec");
      delay(50)
    }
    takelowTime=true;
  }
if(digitalRead(pirPin)==LOW)
{
  digitalWrite(ledPin,LOW);
  if(takelowTime)
  {
    lowln=millis();
    takelowTime=false;
  }
  
}
if(!lowlock&&millis()-lowln>pause)
{
  locklow=true;
  Serial.print("motion detected");
  Serial.println(millis()-pause/100);
  delay(50)
}
}
}
