#define RainPin 42

int Rain_value = 0;

void setup() {
  pinMode(RainPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Rain_value = digitalRead(RainPin);

  if (Rain_value == 0) {
    Rain_value = 1;
  } else {
    Rain_value = 0;
  }
  Serial.println(Rain_value);
  delay(5000);
}
