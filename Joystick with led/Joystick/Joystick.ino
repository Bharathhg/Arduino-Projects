const int SW_pin=2;
const int X_pin=A0;
const int Y_pin=A1;
int led1=3;
int led2=4;
int led3=5;
int led4=6;
int led5=7;

void setup() {
 Serial.begin(115200);
 pinMode(SW_pin,INPUT);
 digitalWrite(SW_pin,HIGH);
 pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
     pinMode(led5,OUTPUT);
}

void loop() {
  Serial.print("Switch:");
   Serial.print(digitalRead(SW_pin));
    Serial.println(" ");
     Serial.print("X-axis:");
      Serial.print(analogRead(X_pin));
       Serial.println(" ");
        Serial.print("Y-axis:");
         Serial.print(analogRead(Y_pin));
          Serial.println(" ");
           delay(500);

           {
           if(analogRead(X_pin)>=448 && analogRead(X_pin)<=663 &&  analogRead(Y_pin)>=333 && analogRead(Y_pin)<=532)
         
           {
            digitalWrite(led3,HIGH);
           }
            else 
            {
              digitalWrite(led3,LOW);
            }
           }
           
           {
           if(analogRead(X_pin)>=700 && analogRead(X_pin)<=1023 && analogRead(Y_pin)>=440&& analogRead(Y_pin)<=599)
               {
                digitalWrite(led1,HIGH); 
               }
          else 
            {
              digitalWrite(led1,LOW);
            }
           }
           
           {
           if(analogRead(X_pin)>=0 && analogRead(X_pin)<=230 && analogRead(Y_pin)>=310 && analogRead(Y_pin)<=540 )
           
           {
            digitalWrite(led2,HIGH);
           }
            else 
            {
              digitalWrite(led2,LOW);
            }
           }
           
           {
           if(analogRead(X_pin)>=497 && analogRead(X_pin)<=517 && analogRead(Y_pin)>=750 && analogRead(Y_pin)<=1023)
          
           {
            digitalWrite(led4,HIGH);
           }
            else 
            {
              digitalWrite(led4,LOW);
            }
           }
           
           {
           if(analogRead(X_pin)>=350 && analogRead(X_pin)<=520 && analogRead(Y_pin)>=0 && analogRead(Y_pin)<=6)
           
           {
            digitalWrite(led5,HIGH);
           }
            else 
            {
              digitalWrite(led5,LOW);
            }
           }
} 
