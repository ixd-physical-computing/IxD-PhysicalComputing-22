#include <Adafruit_VL53L0X.h>
#include <Wire.h>

const int ledPin = 3;
 
// make an instance from the library:
Adafruit_VL53L0X sensor = Adafruit_VL53L0X();
const int maxDistance  = 800;
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  sensor.begin();

  //configure the sensor
  /* config can be:
    VL53L0X_SENSE_DEFAULT: about 500mm range
    VL53L0X_SENSE_LONG_RANGE: about 2000mm range
    VL53L0X_SENSE_HIGH_SPEED: about 500mm range
    VL53L0X_SENSE_HIGH_ACCURACY: about 400mm range, 1mm accuracy
  */
  sensor.configSensor(Adafruit_VL53L0X::VL53L0X_SENSE_LONG_RANGE);
  // set sensor to range continuously:
  sensor.startRangeContinuous();
}

void loop() {
  // if the reading is done:
  if (sensor.isRangeComplete()) {
    // read the result:
    int result = sensor.readRangeResult();
    int brightness = map(result, 0, maxDistance, 255, 0);
    
    // if it's with the max distance:
    if (result > 0 && result < maxDistance) {
      // print the result (distance in mm):
      Serial.println(result);
      analogWrite(ledPin, brightness);
      } else {
        analogWrite(ledPin, 0);
      }
  }
}