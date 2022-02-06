
int first = 6;
int second = 7;
int enA = 9;
void setup() {

  pinMode(enA, OUTPUT);
  pinMode(first, OUTPUT);
  pinMode(second, OUTPUT);

  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  
}

void loop() {
  int potValue = analogRead(A0); // Read potentiometer value
  int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  analogWrite(enA, pwmOutput); // Send PWM signal to L298N Enable pin
  
}
