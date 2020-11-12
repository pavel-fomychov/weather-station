#include <Wire.h>
#include <Thinary_AHT10.h>
AHT10Class AHT10;

#define txPin 2
#define txOnPin1 3
#define txOnPin2 4

int code = 0;
int temperature = 0;
int humidity = 0;

void setup() {
  //Serial.begin(9600);
  Wire.begin();
  pinMode(txPin, OUTPUT);
  //pinMode(txOnPin1, OUTPUT);
  //pinMode(txOnPin2, OUTPUT);
  //digitalWrite(txOnPin1, HIGH);
  //digitalWrite(txOnPin2, HIGH);
  
  if (AHT10.begin(eAHT10Address_Low)) {
    Serial.println("Init AHT10 Sucess");
  } else {
    Serial.println("Init AHT10 Failure");
  }
}

void loop() {
  temperature = (AHT10.GetTemperature() * 10) + 2000;
  humidity = (AHT10.GetHumidity() * 10) + 3000;
  Send(temperature);
  Send(humidity);

  //Serial.println(String("") + "Temperature: " + temperature + "℃");
  //Serial.println(String("") + "Humidity:   " + humidity + "%");

  delay(1000);
}

void Send(int code) {
  for (int j = 0; j < 4; j++) {
    digitalWrite(txPin, HIGH);
    delayMicroseconds(400);
    digitalWrite(txPin, LOW);
    for (int i = 12; i > 0; i--) {
      byte b = bitRead(code, i - 1);
      if (b) {
        digitalWrite(txPin, LOW);     // 1
        delayMicroseconds(800);
        digitalWrite(txPin, HIGH);
        delayMicroseconds(400);
      } else {
        digitalWrite(txPin, LOW);     // 0
        delayMicroseconds(400);
        digitalWrite(txPin, HIGH);
        delayMicroseconds(800);
      }
    }
    digitalWrite(txPin, LOW);
    delayMicroseconds(2000);
  }
}
