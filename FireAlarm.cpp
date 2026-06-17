int flameSensor = 2;
int led = 8;
int buzzer = 9;

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int flameValue = digitalRead(flameSensor);

  if (flameValue == LOW) {   // Fire detected
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } 
  else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}