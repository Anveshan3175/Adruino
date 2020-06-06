// The LED Flasher Program
// This program flashes LEDs connected to digital pins 0
// through 7. The LEDs on each pin are flashed one at a
// time in forward sequence from pin 0 to pin 7 and then
// backwards, each for half a second.

// the time variable
int time;

void setup() {
  // put your setup code here, to run once:

    for(int pin = 0; pin < 8; pin++){
        pinMode(pin,OUTPUT);
    }

    time = 500;
}

void loop() {
  // put your main code here, to run repeatedly:

    for(int pin = 0; pin < 8; pin++){
        digitalWrite(pin,HIGH);
        delay(time);
        digitalWrite(pin,LOW);
    }

    for(int pin = 6; pin > 0; pin--){
        digitalWrite(pin,HIGH);
        delay(time);
        digitalWrite(pin,LOW);
    }
}
