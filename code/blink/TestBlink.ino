//TestBlink.ino

int led = 12;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(delayTime);               // wait for a second
    digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
    delay(delayTime);               // wait for a second
}
