#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>

#define ONE_WIRE_BUS 27
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void readTemperature() {
  // Request temperature from the sensor
  sensors.requestTemperatures();
  
  // Get the temperature in Celsius degrees
  float tempC = sensors.getTempCByIndex(0);
  
  // Convert Celsius to Fahrenheit degrees
  float tempF = (tempC * 9.0) / 5.0 + 32.0;
  
  // Store the temperature in the global variable
  temperature_DS = tempC; // or tempF if you prefer Fahrenheit
  
}