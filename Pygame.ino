#include "DHT.h"
#define DHTPIN 8
#define DHTTYPE DHT22
#define Heater 22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(Heater, OUTPUT);
  dht.begin();
  Serial.begin(9600);
  Serial3.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print(t);
  Serial.print(", ");
  Serial.println(h);

  if (Serial.available()) {
    delay(3);
    char c = Serial.read();

    if (c == 'a') {
      digitalWrite(Heater, HIGH);
    }
    if (c == 'b') {
      digitalWrite(Heater, LOW);
    }
  }
  if (Serial3.available()) {
    delay(3);
    char c = Serial3.read();

    if (c == 'a') {
      digitalWrite(Heater, HIGH);
    }
    if (c == 'b') {
      digitalWrite(Heater, LOW);
    }
  }
}
