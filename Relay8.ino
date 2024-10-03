#define Relay1 22
#define Relay2 24
#define Relay3 26
#define Relay4 28
#define Relay5 30
#define Relay6 32
#define Relay7 34
#define Relay8 38

int Relay1Value = 0;
int Relay2Value = 0;
int Relay3Value = 0;
int Relay4Value = 0;
int Relay5Value = 0;
int Relay6Value = 0;
int Relay7Value = 0;
int Relay8Value = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  pinMode(Relay5, OUTPUT);
  pinMode(Relay6, OUTPUT);
  pinMode(Relay7, OUTPUT);
  pinMode(Relay8, OUTPUT);

  digitalWrite(Relay1, HIGH);
  delay(1000);
  digitalWrite(Relay2, HIGH);
  delay(1000);
  digitalWrite(Relay3, HIGH);
  delay(1000);
  digitalWrite(Relay4, HIGH);
  delay(1000);
  digitalWrite(Relay5, HIGH);
  delay(1000);
  digitalWrite(Relay6, HIGH);
  delay(1000);
  digitalWrite(Relay7, HIGH);
  delay(1000);
  digitalWrite(Relay8, HIGH);
  delay(1000);
}

void loop()
{
  digitalWrite(Relay1, HIGH);
  delay(1000);
  digitalWrite(Relay2, HIGH);
  delay(1000);
  digitalWrite(Relay3, HIGH);
  delay(1000);
  digitalWrite(Relay4, HIGH);
  delay(1000);
  digitalWrite(Relay5, HIGH);
  delay(1000);
  digitalWrite(Relay6, HIGH);
  delay(1000);
  digitalWrite(Relay7, HIGH);
  delay(1000);
  digitalWrite(Relay8, HIGH);
  delay(1000);
  digitalWrite(Relay1, LOW);
  delay(5000);
  digitalWrite(Relay2, LOW);
  delay(5000);
  digitalWrite(Relay3, LOW);
  delay(5000);
  digitalWrite(Relay4, LOW);
  delay(5000);
  digitalWrite(Relay5, LOW);
  delay(5000);
  digitalWrite(Relay6, LOW);
  delay(5000);
  digitalWrite(Relay7, LOW);
  delay(5000);
  digitalWrite(Relay8, LOW);
  delay(5000);
}
