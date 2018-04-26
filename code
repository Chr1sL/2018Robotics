#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *motor1 = AFMS.getMotor(1);  //left front
Adafruit_DCMotor *motor2 = AFMS.getMotor(2);  //left back
Adafruit_DCMotor *motor3 = AFMS.getMotor(3);  //right back
Adafruit_DCMotor *motor4 = AFMS.getMotor(4);  //right front

int start;
int down_eye;
int back_and_turn;
int front_eyes;
int RirState = 0;         
int LirState = 0;
int time = 0;
int count = 0;

void setup(){
  //pinMode (2, INPUT); 
  //pinMode (5, INPUT); 
  //pinMode(A2, INPUT);
  Serial.begin(9600);
  delay (5000); //5 second delay

}

void loop(){
  AFMS.begin(); 

  int valueA0 = analogRead (A0); //backdown
  int valueA1 = analogRead (A1); // frontdown
  int valueA2 = analogRead (A2); // frontup
  int valueD2 = digitalRead (2); // right
  int valueD3 = digitalRead (3); // left
  int valueD4 = digitalRead (4); // back

  if(valueA2>250){
    motor1->setSpeed(170);
    motor1->run(FORWARD);
    motor2->setSpeed(170);
    motor2->run(FORWARD);
    motor3->setSpeed(170);
    motor3->run(FORWARD);
    motor4->setSpeed(170);
    motor4->run(FORWARD);
    delay (2);
  }

  if(valueA2>450){
    motor1->setSpeed(190);
    motor1->run(FORWARD);
    motor2->setSpeed(190);
    motor2->run(FORWARD);
    motor3->setSpeed(190);
    motor3->run(FORWARD);
    motor4->setSpeed(190);
    motor4->run(FORWARD);
    delay (3);
  }  

  if(valueA2>510){
    motor1->setSpeed(230);
    motor1->run(FORWARD);
    motor2->setSpeed(230);
    motor2->run(FORWARD);
    motor3->setSpeed(230);
    motor3->run(FORWARD);
    motor4->setSpeed(230);
    motor4->run(FORWARD);
    delay (3);
  }

  if(valueD2==0){
    motor1->setSpeed(60);
    motor1->run(FORWARD);
    motor2->setSpeed(60);
    motor2->run(FORWARD);
    motor3->setSpeed(60);
    motor3->run(BACKWARD);
    motor4->setSpeed(60);
    motor4->run(BACKWARD);
    delay (250);
  }

  if(valueD3==0){
    motor1->setSpeed(60);
    motor1->run(BACKWARD);
    motor2->setSpeed(60);
    motor2->run(BACKWARD);
    motor3->setSpeed(60);
    motor3->run(FORWARD);
    motor4->setSpeed(60);
    motor4->run(FORWARD);
    delay (250);
  }

  if (valueD4==0) {
    motor1->setSpeed(110);
    motor1->run(BACKWARD);
    motor2->setSpeed(110);
    motor2->run(BACKWARD);
    motor3->setSpeed(110);
    motor3->run(BACKWARD);
    motor4->setSpeed(110);
    motor4->run(BACKWARD);
    delay (400);
  }
  motor1->setSpeed(132);
  motor1->run(FORWARD);
  motor2->setSpeed(132);
  motor2->run(FORWARD);
  motor3->setSpeed(132);
  motor3->run(FORWARD);
  motor4->setSpeed(132);
  motor4->run(FORWARD);
  delay (2);

  if (valueA1<30){  // frontdown sensor when white
    motor1->setSpeed(100);
    motor1->run(BACKWARD);
    motor2->setSpeed(100);
    motor2->run(BACKWARD);
    motor3->setSpeed(100);
    motor3->run(BACKWARD);
    motor4->setSpeed(100);
    motor4->run(BACKWARD);
    delay (1000);

    //copied from above    ~~~~~~~~~
  if(valueA2>250){
    motor1->setSpeed(150);
    motor1->run(FORWARD);
    motor2->setSpeed(150);
    motor2->run(FORWARD);
    motor3->setSpeed(150);
    motor3->run(FORWARD);
    motor4->setSpeed(150);
    motor4->run(FORWARD);
    delay (2);
  }

  if(valueA2>450){
    motor1->setSpeed(185);
    motor1->run(FORWARD);
    motor2->setSpeed(185);
    motor2->run(FORWARD);
    motor3->setSpeed(185);
    motor3->run(FORWARD);
    motor4->setSpeed(185);
    motor4->run(FORWARD);
    delay (3);
  }  

  if(valueA2>510){
    motor1->setSpeed(211);
    motor1->run(FORWARD);
    motor2->setSpeed(211);
    motor2->run(FORWARD);
    motor3->setSpeed(211);
    motor3->run(FORWARD);
    motor4->setSpeed(211);
    motor4->run(FORWARD);
    delay (3);
  }

  if(valueD2==0){
    motor1->setSpeed(60);
    motor1->run(FORWARD);
    motor2->setSpeed(60);
    motor2->run(FORWARD);
    motor3->setSpeed(60);
    motor3->run(BACKWARD);
    motor4->setSpeed(60);
    motor4->run(BACKWARD);
    delay (250);
  }

  if(valueD3==0){
    motor1->setSpeed(60);
    motor1->run(BACKWARD);
    motor2->setSpeed(60);
    motor2->run(BACKWARD);
    motor3->setSpeed(60);
    motor3->run(FORWARD);
    motor4->setSpeed(60);
    motor4->run(FORWARD);
    delay (250);
  }
    if (valueD4==0) {
      motor1->setSpeed(110);
      motor1->run(BACKWARD);
      motor2->setSpeed(110);
      motor2->run(BACKWARD);
      motor3->setSpeed(110);
      motor3->run(BACKWARD);
      motor4->setSpeed(110);
      motor4->run(BACKWARD);
      delay (400);
    }

    //copied from above ^^^^

    motor1->setSpeed(50);
    motor1->run(FORWARD);
    motor2->setSpeed(50);
    motor2->run(FORWARD);
    motor3->setSpeed(50);
    motor3->run(BACKWARD);
    motor4->setSpeed(50);
    motor4->run(BACKWARD);
    delay (500);
  }

  //start:
  //    if (valueA1>800){
  //      goto check;
  //    }
  //
  //check:
  //
  //    goto start;
  //  }
}
