#define WaterPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int WaterValue = analogRead(WaterPin);
  int Water = map(WaterValue, 518, 271, 0, 100);
  Water = constrain(Water, 0, 100);

  Serial.print("Water value = ");
  Serial.print(WaterValue);
  Serial.print(", Water = ");
  Serial.print(Water);
  Serial.println(" %");
  delay(5000);
}
