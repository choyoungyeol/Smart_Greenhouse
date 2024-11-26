#include <SoftwareSerial.h>

void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  Serial.println("Goodnight moon!");
  Serial3.begin(9600);
  Serial3.println("Hello, world?");
}

void loop() { // run over and over
  if (Serial3.available()) {
    Serial.write(Serial3.read());
  }
  if (Serial.available()) {
    Serial3.write(Serial.read());
  }
}
