#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 2);
void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  Serial.println("Goodnight moon!");
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

void loop() { // run over and over
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
