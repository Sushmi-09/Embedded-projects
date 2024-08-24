int LEDpin = 13;
int obstaclePin = 10;
int obstaclePin1 = 11;

int hasObstacle = LOW; // LOW MEANS NO OBSTACLE

int hasObstacle1 = LOW; // LOW MEANS NO OBSTACLE

void setup() {
pinMode(LEDpin, OUTPUT);
pinMode(obstaclePin, INPUT);
pinMode(obstaclePin1, INPUT);
Serial.begin(9600);
}

void loop() {
hasObstacle = digitalRead(obstaclePin);
hasObstacle1 = digitalRead(obstaclePin1);

if (hasObstacle == HIGH) {
Serial.print("PARKING LOT 1 FULL ");
digitalWrite(LEDpin, LOW);
}
else {
Serial.print("PARKING LOT 1 CLEAR        ");
digitalWrite(LEDpin, HIGH);
}

if (hasObstacle1 == HIGH) {
Serial.println("PARKING LOT 2 FULL       ");
digitalWrite(LEDpin, LOW);
}
else {
Serial.println("PARKING LOT 2 CLEAR");
digitalWrite(LEDpin, HIGH);
}
delay(200);

}
