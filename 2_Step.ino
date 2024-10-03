#include <Servo.h>

#define RSWPin 4
#define LSWPin 5
#define RUWPin 6
#define LUWPin 7

int i;

Servo RSW;    //Right Side Window
Servo LSW;    //Left Side Window
Servo RUW;    //Right Up Window
Servo LUW;    //Left Up Window

void setup() {
  Serial.begin(9600);

  RSW.attach(RSWPin);
  LSW.attach(LSWPin);
  RUW.attach(RUWPin);
  LUW.attach(LUWPin);

  RSW.write(0);
  delay(1000);
  LSW.write(180);
  delay(1000);
  RUW.write(0);
  delay(1000);
  LUW.write(180);
  delay(1000);
}

void loop() {

  for (i = 0; i <= 70; i++) {
    RSW.write(i);
    delay(20);
  }

  for (i = 180; i >= 110; i--) {
    LSW.write(i);
    delay(20);
  }

  for (i = 0; i <= 70; i++) {
    RUW.write(i);
    delay(20);
  }

  for (i = 180; i >= 110; i--) {
    LUW.write(i);
    delay(20);
  }
  delay(2000);


  for (i = 70; i >= 0; i--) {
    RSW.write(i);
    delay(20);
  }

  for (i = 110; i <= 180; i++) {
    LSW.write(i);
    delay(20);
  }

  for (i = 70; i >= 0; i--) {
    RUW.write(i);
    delay(20);
  }

  for (i = 110; i <= 180; i++) {
    LUW.write(i);
    delay(20);
  }
  delay(2000);

}
