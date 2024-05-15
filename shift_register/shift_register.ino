const int DataPin=2;
const int ClockPin =3;
const int LatchPin=4;

void setup() {
  pinMode(DataPin,OUTPUT);
  pinMode(ClockPin,OUTPUT);
  pinMode(LatchPin,OUTPUT);
  

}

void loop() {
digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST, 255);
digitalWrite(LatchPin,HIGH);
delay(1000);
digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST, 0);
digitalWrite(LatchPin,HIGH);
delay(1000);


}
