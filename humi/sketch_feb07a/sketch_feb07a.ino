#include <dht.h>

#define dht_apin A0 

dht DHT;
 
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"
 
void loop(){
 
    DHT.read11(dht_apin);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    delay(5000);

{    if(DHT.humidity>=47)
    {
       digitalWrite(LED_BUILTIN, HIGH);
       delay(1000);
       digitalWrite(LED_BUILTIN, LOW);
       
  
    }
 else
 {
   digitalWrite(LED_BUILTIN, LOW);
  
 }

}
 
}
