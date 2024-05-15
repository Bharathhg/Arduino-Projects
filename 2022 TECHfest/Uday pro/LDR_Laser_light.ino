const int LDR = A1;
int input_val=0;
int led=13; 
int light=10;
int bazzer=9;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(bazzer,OUTPUT);

}

void loop() {
 digitalWrite(light,HIGH);
 input_val = analogRead(LDR);
 Serial.print("LDR value is : ");
 Serial.println(input_val);
if(input_val>=1 && input_val<=36)
  {
    digitalWrite(led,LOW);
    digitalWrite(bazzer,LOW);
  }
  else
  {
    digitalWrite(led,HIGH);
    digitalWrite(bazzer,HIGH);
  }
}
