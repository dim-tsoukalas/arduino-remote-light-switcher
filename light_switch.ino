#include <IRremote.h>

#define OPEN 27
#define CLOSE 90
#define ONE 82
#define TWO 80
#define THREE 16
#define FOUR 86
#define FIVE 84
#define SIX 20
#define SEVEN 78
#define EIGHT 76
#define NINE 12
#define ZERO 15
const int lightSignalPin=3;
const int RECV_PIN = 2;
int receivedValue=10;

void setup() {
  
  pinMode(lightSignalPin, OUTPUT);
  digitalWrite(lightSignalPin, HIGH);
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN);

}

void loop() {
  
  
if (IrReceiver.decode()){
  IrReceiver.resume();
         Serial.println(IrReceiver.decodedIRData.command);
  receivedValue=IrReceiver.decodedIRData.command;

  switch (receivedValue) {
    case OPEN: {
      digitalWrite(lightSignalPin, LOW);
      break;
    }

    case CLOSE: {
      caseClose:
      digitalWrite(lightSignalPin, HIGH);
      break;
    }
    case ONE: {
      digitalWrite(lightSignalPin, LOW);
      
      delay(60000);
      goto caseClose;
      break;
    }
    case TWO: {
      digitalWrite(lightSignalPin, LOW);
      delay(120000);
      goto caseClose;
      break;
    }
    case THREE: {
      digitalWrite(lightSignalPin, LOW);
      delay(180000);
      goto caseClose;
      break;
    }
    case FOUR: {
      digitalWrite(lightSignalPin, LOW);
      delay(240000);
      goto caseClose;
      break;
    }
    case FIVE: {
      digitalWrite(lightSignalPin, LOW);
      delay(300000);
      goto caseClose;
      break;
    }
    case SIX: {
      digitalWrite(lightSignalPin, LOW);
      delay(360000);
      goto caseClose;
      break;
    }
    case SEVEN: {
      digitalWrite(lightSignalPin, LOW);
      delay(420000);
      goto caseClose;
      break;
    }
    case EIGHT: {
      digitalWrite(lightSignalPin, LOW);
      delay(480000);
      goto caseClose;
      break;
    }
    case NINE: {
      digitalWrite(lightSignalPin, LOW);
      delay(540000);
      goto caseClose;
      break;
    }
    case ZERO: {
      goto caseClose;
      break;
    }

  }
  }
     

  // open light
  //digitalWrite(lightSignalPin, LOW);

  // close light
  //digitalWrite(lightSignalPin, HIGH);
}
