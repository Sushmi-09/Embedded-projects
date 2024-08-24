#include <WiFi.h>
#include <ThingSpeak.h>
const int ledPin= 15;
const int trig = 5;
const int echo = 18;
float distance;
long duration;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
 
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}
long getdistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  return(duration*0.034/2);
}
void loop() 
{
 distance = getdistance();
 Serial.println(distance);
}
