int redLed = 12;
int buzzer = 10;
int sensorValue = 0;
void setup() {
 pinMode(redLed, OUTPUT);
 pinMode(buzzer, OUTPUT);
 pinMode(A5, INPUT);
 Serial.begin(9600);
}
void loop() {
 sensorValue = analogRead(A5);
 Serial.print(" Pin A5: "); 
 Serial.println(sensorValue, DEC);
 if (sensorValue > 4) 
 {
 digitalWrite(redLed, HIGH);
 digitalWrite(buzzer, HIGH);
 }
 else
 {
 digitalWrite(redLed, LOW);
 digitalWrite(buzzer, LOW);
 }
 delay(100); 
}
