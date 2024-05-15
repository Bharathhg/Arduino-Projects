int trigpin=12;
int echopin=11;
int l1=2;
int l2=4;
int l3=7;



void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(l1,OUTPUT);
      pinMode(l2,OUTPUT);
          pinMode(l3,OUTPUT);
}

void loop() {
  long duration,distance;
  digitalWrite(trigpin,HIGH);
  delay(1000);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  if
  ((distance<=5))
  {
    digitalWrite(l1,HIGH);
  }
  else if(distance>5 && distance<=10)
  {
    digitalWrite(l2,HIGH);
  }
  else if(distance>10 && distance<=20)
  {
    digitalWrite(l3,HIGH);
  }
  else if(distance>20)
  {
   digitalWrite(l1,LOW);
   digitalWrite(l2,LOW);
   digitalWrite(l3,LOW);
     
  }
  

}
