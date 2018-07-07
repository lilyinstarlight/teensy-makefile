/*
  FibBlink blinks the fibonacci sequence using the on-board LED.
*/

#define LED 13

unsigned long long prev = 0;
unsigned long long num = 1;
unsigned long long temp = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int blink = 0; blink < num; blink++) {
    digitalWrite(LED, HIGH);
    delay(250);
    digitalWrite(LED, LOW);
    delay(250);
  }

  temp = num;
  num = num + prev;
  prev = temp;

  delay(1000);
}
