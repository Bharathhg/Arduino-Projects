int trigpin=10;
int echopin=11;
int l1=3;

void setup() 
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(l1,OUTPUT);
}

void loop() 
{
  long duration,distance;
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
  {
    if(distance<=5)
   {
   digitalWrite(l1,HIGH);
   delayMicroseconds(1000);
  
   }
   else if(distance>=5 && distance<10)
   {
  digitalWrite(l1,HIGH);
  delayMicroseconds(25);
  
   }
else if(distance>=10 && distance<=15)
  {
    digitalWrite(l1,HIGH);
  delayMicroseconds(50);
  }
else if(distance>15)
  {
    digitalWrite(l1,LOW);
  delayMicroseconds(1000);
  }

 }
  }
