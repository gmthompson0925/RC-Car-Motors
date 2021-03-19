
int motorPin = 3;
int motorPin2 = 4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (motorPin, OUTPUT);
pinMode (motorPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0);

int val = Serial.read() - '0';

if (val == 1) {
  Serial.println("Motor is going foward");
  digitalWrite (motorPin, HIGH);
  digitalWrite (motorPin2, HIGH);
}
 
else if (val == 0) {
  Serial.println("Motor is off");
  digitalWrite(motorPin, LOW);
  digitalWrite (motorPin2, LOW);
}

else if (val == 2) {
  Serial.println("Motor is turning right");
  digitalWrite(motorPin, LOW);
  digitalWrite (motorPin2, HIGH);
}

else if (val == 3) {
  Serial.println("Motor is turning left");
  digitalWrite(motorPin, HIGH);
  digitalWrite (motorPin2, LOW);
}

Serial.flush();
}
