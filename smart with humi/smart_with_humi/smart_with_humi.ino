
#include <Servo.h>
#include <dht.h>
#define dht_apin A1

dht DHT;
int trigpin=12;
int echopin=11;
Servo myservo;
int pos = 0; 

void setup() {
myservo.attach(8);
Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
 
 
}

void loop() {
long duration,distance;
  digitalWrite(trigpin,HIGH);
  delay(500);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

  if((distance<=50))
  {
    for (pos = 0; pos <= 150; pos += 1) 
    myservo.write(pos); 
  }
  else
  {
    for (pos = 150; pos >= 0; pos -= 1) 
    myservo.write(pos);
    }

     DHT.read11(dht_apin);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    delay(500);

{    if(DHT.humidity>=62)
    {
       digitalWrite(LED_BUILTIN, HIGH);
       delay(1000);                       
       digitalWrite(LED_BUILTIN, LOW);   
       delay(1000);    
  
    }
 else
 {
   digitalWrite(LED_BUILTIN, LOW);
  
 }

}
  }
