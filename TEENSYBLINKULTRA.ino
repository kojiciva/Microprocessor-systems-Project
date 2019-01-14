int trigger=7;
int echo=8;
int time=0;
int dist=0;
int ledPin=13;

void setup() {
  pinMode(trigger,OUTPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  digitalWrite(trigger,LOW);
  delay(8);
  digitalWrite(trigger,HIGH);
  delay(12);
  digitalWrite(trigger,LOW);
  time=pulseIn(echo,HIGH);
  dist=(time*0.034)/2;
  delay(200);
  if(dist>5&&dist<200)
  {
    digitalWrite(ledPin,HIGH);
    delay(dist*5);
    digitalWrite(ledPin,LOW);
  }
  if (dist<=5)
  {
   digitalWrite(ledPin,HIGH);
  }
  
  

}
