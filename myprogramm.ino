/*this code is writen by salem farhani please my friend user don't use the same code for life or deith matters */
#include <Servo.h>
#include <ultrasonic.h>
#include <Motor.h>
//intilisation of ultrasonic sensor 
int  trigpin = 35;
int echopin = 25;
int duration;
int distance;
int cm ;
//intilisation of servomotor
int angle=90;
int monservo=19
//intilisatiion of motor pins 
int leftMotorForward = 2;     /* GPIO2(D2) -> IN3   */
int rightMotorForward = 15;   /* GPIO15(D1115) -> IN1  */
int leftMotorBackward = 4;    /* GPIO0(D4) -> IN4   */
int rightMotorBackward = 13;  /* GPIO13(D13) -> IN2  */
int rightMotorENB = 14; /* GPIO14(D14) -> Motor-A Enable */
int leftMotorENB = 12;  /* GPIO12(D12) -> Motor-B Enable */

void setup (){
  serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode (echopin, INPUT);
  /* initialize motor control pins as output */
  pinMode(leftMotorForward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT); 
  pinMode(leftMotorBackward, OUTPUT);  
  pinMode(rightMotorBackward, OUTPUT);
  /*initialize servomotor pin*/
  monservo.attach(19)

  /* initialize motor enable pins as output */
  
  pinMode(leftMotorENB, OUTPUT); 
  pinMode(rightMotorENB, OUTPUT);

}
void loop() {
digitalWrite (trig,HIGH);
delayMicroseconds (10);
digitalWrite (echo, LOW) ;
delayMicroseconds (2);
duration = pulseIn(echo, HIGH);
distance = duration*0.034/2;
long (distance,cm)
cm = microsecondsToCentimeters(duration);
Serial.print(cm);
}
if (distance > 15) {
   //Forward
  digitalWrite(leftMotorENB,HIGH);
  digitalWrite(rightMotorENB,HIGH);
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorBackward,LOW);
}
else{
  // stop
  digitalWrite(leftMotorENB,LOW);
  digitalWrite(rightMotorENB,LOW);
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,LOW);
}
  // activate servo motor and turn it to 180 degre
  monservo.write(180)
    if (distance >15) {
      //turn right 
      digitalWrite(leftMotorENB,HIGH);
      digitalWrite(rightMotorENB,HIGH);
      digitalWrite(leftMotorForward,HIGH);
      digitalWrite(rightMotorForward,LOW);
      digitalWrite(leftMotorBackward,LOW);
      digitalWrite(rightMotorBackward,HIGH);
      // forword
      digitalWrite(leftMotorENB,HIGH);
      digitalWrite(rightMotorENB,HIGH);
      digitalWrite(leftMotorForward,HIGH);
      digitalWrite(rightMotorForward,HIGH);
      digitalWrite(leftMotorBackward,LOW);
      digitalWrite(rightMotorBackward,LOW);

    }
    else{
    // stop
     digitalWrite(leftMotorENB,LOW);
     digitalWrite(rightMotorENB,LOW);
     digitalWrite(leftMotorForward,LOW);
     digitalWrite(leftMotorBackward,LOW);
     digitalWrite(rightMotorForward,LOW);
     digitalWrite(rightMotorBackward,LOW);
    }
  monservo.write(90)
  delay(2)
  monservo.write(0)
      if (distance > 15){
               // turn left 
         digitalWrite(leftMotorENB,HIGH);
         digitalWrite(rightMotorENB,HIGH); 
         digitalWrite(leftMotorForward,LOW);
         digitalWrite(rightMotorForward,HIGH);
         digitalWrite(rightMotorBackward,LOW);
         digitalWrite(leftMotorBackward,HIGH);
         //forword
         digitalWrite(leftMotorENB,HIGH);
         digitalWrite(rightMotorENB,HIGH);
         digitalWrite(leftMotorForward,HIGH);
         digitalWrite(rightMotorForward,HIGH);
         digitalWrite(leftMotorBackward,LOW);
         digitalWrite(rightMotorBackward,LOW);
      }
      else{
      // stop
        digitalWrite(leftMotorENB,LOW);
        digitalWrite(rightMotorENB,LOW);
        digitalWrite(leftMotorForward,LOW);
        digitalWrite(leftMotorBackward,LOW);
        digitalWrite(rightMotorForward,LOW);
        digitalWrite(rightMotorBackward,LOW);
   
  
  
  
      }     
}







