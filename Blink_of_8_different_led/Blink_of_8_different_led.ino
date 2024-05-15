 
int LED_BUILTIN1=2;
int LED_BUILTIN2=3;
int LED_BUILTIN3=4;
int LED_BUILTIN4=5;
int LED_BUILTIN5=6;
int LED_BUILTIN6=7;
int LED_BUILTIN7=8;
int LED_BUILTIN8=9;
int LED_BUILTIN9=11;


void setup() {
  
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN9, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
  pinMode(LED_BUILTIN5, OUTPUT);
  pinMode(LED_BUILTIN6, OUTPUT);
  pinMode(LED_BUILTIN7, OUTPUT);
  pinMode(LED_BUILTIN8, OUTPUT);
   pinMode(LED_BUILTIN9, OUTPUT);
  
}


void loop() {
  digitalWrite(LED_BUILTIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN9, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(LED_BUILTIN3, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);                       // wait for a second
  digitalWrite(LED_BUILTIN4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(LED_BUILTIN5, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3500);                       // wait for a second
  digitalWrite(LED_BUILTIN6, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a second
  digitalWrite(LED_BUILTIN7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(LED_BUILTIN8, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
}
