/* Pressure Pad Sketch
 * Code inspired by adafruit.com
 */
 
 
int pressureAnalogPin = 0; //Pin where our pressure pad is located.
int pressureReading; // INT variable for storing our reading

//Adjust these if required.
int noPressure = 5; //max value for no pressure on the pad
int lightPressure = 100; //max value for light pressure on the pad
int mediumPressure = 200; //max value for medium pressure on the pad
 
void setup(void) {
  Serial.begin(9600);
}
 
void loop(void) {
  pressureReading = analogRead(pressureAnalogPin);
  
  Serial.print("Pressure Pad Reading = ");
  Serial.println(pressureReading);
  //float voltage = pressureReading * (5.0 / 1023.0);
  //Serial.print("Voltage = ");
  //Serial.println(voltage);
  
  if (pressureReading < noPressure) {
    Serial.println(" - No pressure");
  } else if (pressureReading < lightPressure) {
    Serial.println(" - Light Pressure");
  } else if (pressureReading < mediumPressure) {
    Serial.println(" - Medium Pressure");
  } else{
    Serial.println(" - High Pressure");
  }
  delay(1000);
}
