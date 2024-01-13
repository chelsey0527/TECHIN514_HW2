#include <Arduino.h>

// Define the ANALOG_PIN if it's not defined
#define ANALOG_PIN D1 // Replace A0 with your actual analog pin if different

// Function declaration
int myFunction(int, int);

void setup()
{
  // Setup code here, to run once:
  int result = myFunction(2, 3);

  pinMode(ANALOG_PIN, INPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop()
{
  // Main code here, to run repeatedly:
  int analogValue = analogRead(ANALOG_PIN); // Read the analog value
  float Voltage = 3.3 * (analogValue / 4095.0);

  Serial.print("ADC_Value: ");
  Serial.print(analogValue);
  Serial.print(" Voltage: ");
  Serial.println(Voltage); // 'println' adds a new line at the end
  delay(1000);             // Wait for a second
}

// Function definition
int myFunction(int x, int y)
{
  return x + y;
}
