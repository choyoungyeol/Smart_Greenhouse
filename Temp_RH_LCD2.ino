#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 12
#define DHTTYPE DHT22

LiquidCrystal_I2C lcd(0x27, 20, 4);
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();

  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("Hello, world!");
  lcd.setCursor(2, 1);
  lcd.print("Jeju Nat'l Univ.");
  lcd.setCursor(0, 2);
  lcd.print("Hortic. Sci. Major");
  lcd.setCursor(2, 3);
  lcd.print("Cho Young-Yeol");
  delay(5000);
}


void loop()
{
  delay(5000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%  Temperature: ");
  Serial.print(t);
  Serial.println("°C");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp : ");
  lcd.print(t);
  lcd.print(" oC");
  lcd.setCursor(0, 1);
  lcd.print("Humi : ");
  lcd.print(h);
  lcd.print(" %");
  lcd.setCursor(0, 2);
  lcd.print("");
  lcd.setCursor(0, 3);
  lcd.print("");
  delay(5000);
}
