#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
String readString;

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);
  dht.begin();
  delay(300);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  readString = "";
  while (Serial3.available()) {
    delay(3);
    char c = Serial3.read();
    readString += c;
  }
  String data = String(temperature) + "," + String(humidity);
  Serial.println(data);
  Serial3.println(data);
  delay(3000);
}
