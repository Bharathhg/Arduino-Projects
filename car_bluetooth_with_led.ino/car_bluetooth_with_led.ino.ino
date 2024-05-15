//Robo India tutorial on Controlling Arduino with Android
//https://www.roboindia.com/tutorials/

#include <SoftwareSerial.h>

SoftwareSerial mySerial(6, 7); // RX, TX

String BT_input;    // to store input character received via BT.
  int LED = 13;                                            // device to control

// Define Motor Pin
const int Motor_L_F = 2;
const int Motor_L_B = 3;
const int Motor_R_F = 4;
const int Motor_R_B = 5;
int LED_BUILTIN1=8;
int LED_BUILTIN2=9;
int LED_BUILTIN3=10;
int LED_BUILTIN4=11;

void setup()  
{
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN9, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
  pinMode(LED, OUTPUT);
  
}
{  
  Serial.begin(9600);                      //default baud rate of module
  mySerial.begin(9600);
  pinMode(LED, OUTPUT);
  while (!Serial) 
  {
     // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() 
digitalWrite(LED,  HIGH);


 { 
  if (mySerial.available())
    {   
        BT_input = mySerial.read();   // read input string from bluetooth 
        Serial.println(BT_input);
        if (BT_input=="1")                
        {
          Forward();
        }
        if (BT_input=="2")                
        {
          Right();
        }
        if (BT_input=="3")                
        {
          Left();
        }
        if (BT_input=="4")                
        {
          Back();
        }
        
        if (BT_input=="5")                
        {
          Stop();
        }
        

    }
 
}


void Forward(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  {
    
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3,  HIGH);
  digitalWrite(LED_BUILTIN4,  LOW);
  
  }
  
  }

void Right(){
  //Stop Right Motor
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);

  //Run Left Motor in Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  {
    
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2,HIGH );
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, LOW);
  
  }
  
  }

void Left(){
  //Stop Left Motor
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  {
    
  digitalWrite(LED_BUILTIN1, HIGH);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3,  LOW);
  digitalWrite(LED_BUILTIN4,  LOW);
 
  }
  
  }

void Back(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);
  {
    
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3,  LOW);
  digitalWrite(LED_BUILTIN4, HIGH);
  
  }
  
  }


void Stop(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);
  

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);
  
  
  }
