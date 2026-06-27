
const int TRIG_PIN = 9; 
const int ECHO_PIN = 8; 
const int LED_PIN  = 12;
const int DISTANCE_THRESHOLD = 10; 


float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);       
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

 
  duration_us = pulseIn(ECHO_PIN, HIGH);
  
  distance_cm = 0.017 * duration_us;

  if(distance_cm < DISTANCE_THRESHOLD)
    digitalWrite(LED_PIN, HIGH);
  else
    digitalWrite(LED_PIN, LOW);  

  
  Serial.println("distance: ");
  Serial.println(distance_cm);
  Serial.println(" cm");

  delay(500);
}
