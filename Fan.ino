#define Fan_in 22
#define Fan_out 24

void setup() {
  Serial.begin(9600);
  pinMode(Fan_in, OUTPUT);
  pinMode(Fan_out, OUTPUT);
}

void loop() {
  digitalWrite(Fan_in, LOW);
  delay(5000);
  digitalWrite(Fan_out, LOW);
  delay(5000);

  digitalWrite(Fan_in, HIGH);
  delay(10000);
  digitalWrite(Fan_out, HIGH);
  delay(10000);

}
