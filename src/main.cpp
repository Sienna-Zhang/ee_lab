#include <Arduino.h>

const int ADC_PIN = 4;  
const float VREF = 3.3;   
const int ADC_MAX = 4095; 

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Lab2 ADC Voltage Read");
}

void loop() {
  int adc = analogRead(ADC_PIN);                 // 0~4095
  float voltage = (adc / (float)ADC_MAX) * VREF; // Voltage = (ADC/4095)*3.3

  Serial.print("ADC=");
  Serial.print(adc);
  Serial.print("  Voltage=");
  Serial.println(voltage, 3);

  delay(500);
}
