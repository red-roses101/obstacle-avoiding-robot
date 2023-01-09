/*this code is writen by salem farhani please my friend user don't use the same code for life or deith matters */
int  trig = 35;
int echo = 25;
int duration;
int distance;
int leftMotorForward = 2;     /* GPIO2(D2) -> IN3   */
int rightMotorForward = 15;   /* GPIO15(D1115) -> IN1  */
int leftMotorBackward = 4;    /* GPIO0(D4) -> IN4   */
int rightMotorBackward = 13;  /* GPIO13(D13) -> IN2  */
int rightMotorENB = 14; /* GPIO14(D14) -> Motor-A Enable */
int leftMotorENB = 12;  /* GPIO12(D12) -> Motor-B Enable */

void setup (){
  pinMode(trig,OUTPUT);
  pinMode (echo, INPUT);
  /* initialize motor control pins as output */
  pinMode(leftMotorForward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT); 
  pinMode(leftMotorBackward, OUTPUT);  
  pinMode(rightMotorBackward, OUTPUT);

  /* initialize motor enable pins as output */
  pinMode(leftMotorENB, OUTPUT); 
  pinMode(rightMotorENB, OUTPUT);

}
void loop() {
digitalWrite (trig, LOW);
delayMicroseconds (10);
digitalWrite (echo, HIGH) ;
delayMicroseconds (2);
duration = pulseIn(echo, HIGH);
distance = duration*0.034/2;
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
  // go back for 0.5 seconds
  digitalWrite(leftMotorENB,HIGH);
  digitalWrite(rightMotorENB,HIGH);
  digitalWrite(leftMotorBackward,HIGH);
  digitalWrite(rightMotorBackward,HIGH);
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(rightMotorForward,LOW);
  // go left for 0.2 seconds 
  digitalWrite(leftMotorENB,HIGH);
  digitalWrite(rightMotorENB,HIGH); 
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(rightMotorBackward,LOW);
  digitalWrite(leftMotorBackward,HIGH);
  
  
}
}





