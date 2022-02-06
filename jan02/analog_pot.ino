 
int sensorValue=0;
int firstLed=2;
int secLed=4;
int thirdLed=6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(firstLed, OUTPUT);
  pinMode(secLed, OUTPUT);
  pinMode(thirdLed, OUTPUT);
  digitalWrite(firstLed , HIGH);
  digitalWrite(secLed , HIGH);
  digitalWrite(thirdLed , HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue= analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue<400)
  {
     digitalWrite(firstLed , HIGH);
     digitalWrite(secLed , LOW);
     digitalWrite(thirdLed , LOW);
     
  }
  else if(sensorValue>800)
  {
     digitalWrite(firstLed , LOW);
     digitalWrite(secLed , HIGH);
     digitalWrite(thirdLed , LOW);
  }
  else {
    digitalWrite(firstLed , LOW);
     digitalWrite(secLed , LOW);
     digitalWrite(thirdLed , HIGH);
  }









  
}
