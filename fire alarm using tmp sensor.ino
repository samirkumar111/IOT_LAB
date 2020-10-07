int temppin=A0;
float temp=0;
int Buzz=12;
void setup()
{
  Serial.begin(9600);
  pinMode(Buzz,OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  
  temp=analogRead(temppin);
  temp=temp*0.48828125;
  Serial.println(temp);
  delay(1000);
  if(temp>30)
  {digitalWrite(Buzz,HIGH);
   digitalWrite(13,HIGH);
  delay(300);}
  else { digitalWrite (Buzz,LOW);
       digitalWrite(13,LOW);
       }}
