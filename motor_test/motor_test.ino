#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *M1 = AFMS.getMotor(1);
Adafruit_DCMotor *M2 = AFMS.getMotor(2);
Adafruit_DCMotor *M3 = AFMS.getMotor(3);
Adafruit_DCMotor *M4 = AFMS.getMotor(4);

  int count = 0;

void setup() {
  pinMode (2, INPUT); 
  pinMode (5, INPUT); 
  pinMode(A0, INPUT);  //back black / white sensor
  pinMode(A1, INPUT);  //front black / white sensor
  pinMode(A2, INPUT);
   Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  
  // Set the speed to start, from 0 (off) to 255 (max speed)
  M1->setSpeed(150);
  M1->run(FORWARD);
  // turn on motor


  M2->setSpeed(150);
  M2->run(FORWARD);
  // turn on motor

  M3->setSpeed(150);
  M3->run(FORWARD);
  // turn on motor

  M4->setSpeed(150);
  M4->run(FORWARD);
  // turn on motor



}

void loop() {
  if ( count < 2000) {
    M1->run(RELEASE);
      M2->run(RELEASE);
        M3->run(RELEASE);
          M4->run(RELEASE);
  }
  count = count ++;


  // put your main code here, to run repeatedly:

}
