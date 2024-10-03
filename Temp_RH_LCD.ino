#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN 8
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Jeju Nat'l Univ.");
  lcd.setCursor(0, 1);
  lcd.print("Horti. Sci. Major");
  lcd.setCursor(0, 2);
  lcd.print("Vegetables Lab.");
  lcd.setCursor(0, 3);
  lcd.print("By Young Yeol Cho");
  delay(5000);
}

void loop() {
  delay(2000);
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp : ");
  lcd.print(temp);
  lcd.print(" oC");
  lcd.setCursor(0, 1);
  lcd.print("Humi : ");
  lcd.print(humi);
  lcd.print(" %");
  delay(5000);

  Serial.print(temp);
  Serial.print(", ");
  Serial.println(humi);
  delay(5000);
}
