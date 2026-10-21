#include<Servo.h>

Servo myServo;
int threashold = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(8 , OUTPUT);
  myServo.attach(9);
  myServo.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int gasValue = analogRead(A0);
  Serial.println("Gas Value : " + gasValue);
  if(gasValue > threashold)
  {
    myServo.write(90);
    digitalWrite(8 , HIGH);
  }
  else {
  myServo.write(0);
  digitalWrite(8 , LOW);
  }

  delay(1000);
}
