#define WaterPin A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int WaterValue = analogRead(WaterPin);
  int Water = map(WaterValue, 526, 284, 0, 100);
  Water = constrain(Water, 0, 100);
  Serial.print(WaterValue);
  Serial.print(", ");
  Serial.println(Water);
  delay(2000);
}
