#include <LiquidCrystal.h>

// LCD pins: RS=7, E=8, D4=9, D5=10, D6=11, D7=12
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Sensor pins
const int voltagePin = A4;
const int currentPin = A1;
const int tempPin    = A2;

// Built-in LED
const int ledPin = 13;

void setup() {
  // LCD setup
  lcd.begin(16, 2);
  lcd.print("EV DIAGONIST");

  // LED setup
  pinMode(ledPin, OUTPUT);

  delay(2000); // show title for 2s
  lcd.clear();
}

void loop() {
  // Read sensor values
  int rawVolt = analogRead(voltagePin);
  int rawCurr = analogRead(currentPin);
  int rawTemp = analogRead(tempPin);

  // Convert to meaningful values
  // (0-1023 ADC → 0-5V)
  float voltage = (rawVolt * 5.0) / 1023.0;     // Volts
  float current = (rawCurr * 5.0) / 1023.0;     // Amps (simulated)
  float tempC   = (rawTemp * 5.0 * 100.0) / 1023.0; // °C for LM35

  // Display on LCD
  lcd.setCursor(0, 0);
  lcd.print("V:");
  lcd.print(voltage, 2);
  lcd.print(" I:");
  lcd.print(current, 2);

  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(tempC, 1);
  lcd.print((char)223); // degree symbol
  lcd.print("C");

  // Blink built-in LED each update
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);

  delay(1000); // update every 1 sec
}