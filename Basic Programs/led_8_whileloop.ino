//The led flasher program

// This program flashes LEDs connected to digital pins 0
// through 7. The LEDs on each pin are flashed one at a
// time in sequence from pin 0 to pin 7 for half a
// second each.


// The time and pin variables

int time;
int pin;


void setup() {
   // put your setup code here, to run once:
   pin  = 0;
   while (pin < 8){
      pinMode(pin,OUTPUT);
      pin++;
   }

   // initialize time
   time = 500;
}

void loop() {
    // put your main code here, to run repeatedly:
    pin = 0;
    while (pin < 8){
        digitalWrite(pin, HIGH);
        delay(time);
        digitalWrite(pin, LOW);
        pin++;
    }
}
