#include <IRremote.h>
#include <Servo.h>

int RECV_PIN = 2;
int SERVO_PIN = 9;
int servoPosition = 110;
bool servoState = false;

IRrecv irrecv(RECV_PIN);
decode_results results;
Servo servo;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  servo.attach(SERVO_PIN);
}

void loop() {
  if (irrecv.decode(&results)) {
    unsigned long value = results.value;
    
    if (value == 0xB0187E42) {
      
      if (servoState) {
        servoPosition = 80;
        servoState = false;
      } else {
        servoPosition = 140;
        servoState = true;
      }
      
      servo.write(servoPosition);
      delay(500);
      servo.write(110);
    }
    
    irrecv.resume();
  }
}
