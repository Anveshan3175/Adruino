// Proximity Sensor
// This program uses an HC-SR04 Ultrasonic Range


void setup() {
  // put your setup code here, to run once:

    // Set the pin modes  
    pinMode(2,OUTPUT);  // Trigger pin  
    
    pinMode(3, INPUT);  // Echo pin  

  Serial.begin(9600);
  Serial.println("Hello World");
    
}

void loop() {
  // put your main code here, to run repeatedly:

      float distance;  
      int pulseLength;


      // Send the trigger pulse to start the echo ranging
        digitalWrite(2, LOW);
        delayMicroseconds(20);
        digitalWrite(2, HIGH);
        delayMicroseconds(100);
        digitalWrite(2, LOW);

        // Get the echo pulse and calculate the distance
        pulseLength = pulseIn(3, HIGH);
        distance=pulseLength / 58.774;
        Serial.println("Distance is ");
        Serial.println(distance);

        delay(5000);
}
