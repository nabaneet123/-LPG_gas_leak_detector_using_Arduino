#include <LiquidCrystal.h>

// Define pins
const int buzzerPin = 8;
const int mq2Pin = A0;

// Initialize LCD display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Initialize LCD display
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Gas Detector:");
  
  // Initialize buzzer
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read gas sensor value
  int gasValue = analogRead(mq2Pin);

  // Display gas value on LCD
  lcd.setCursor(0, 1);
  lcd.print("Gas Level: ");
  lcd.print(gasValue);

  // Check if gas level exceeds the threshold
  if (gasValue > 500) {  // Adjust threshold as needed
    lcd.setCursor(0, 0);
    lcd.print("Gas Detected!");
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    delay(1000); // Buzzer on for 1 second
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Gas Detector:");
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
  }

  // Delay for a moment before the next reading
  delay(1000);
}
