
#include <Servo.h>


int trigpin=12;
int echopin=11;
Servo myservo;
int pos = 0; 

void setup() {
  // put your setup code here, to run once:
myservo.attach(8);
Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
long duration,distance;
  digitalWrite(trigpin,HIGH);
  delay(1000);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  if((distance<=50))
  {
    for (pos = 0; pos <= 100; pos += 1) 
    myservo.write(pos); 
  }
  else
  {
    for (pos = 100; pos >= 0; pos -= 1)  // goes from 180 degrees to 0 degrees
    myservo.write(pos);
    }
  }
