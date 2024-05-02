#include <LiquidCrystal_I2C.h>

char receivedData[12]; // Variable containing the data read from Qt
LiquidCrystal_I2C lcd(0x27, 16, 2);
String incomingData;

// Function to initialize the LCD
void initializeLCD() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("hello");
}

// Function to display data on LCD
void displayData(String texte1, String texte2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("nom: " + texte1);
  lcd.setCursor(0, 1);
  lcd.print("prenom: " + texte2);
}

// Setup function
void setup() {
  initializeLCD();
  Serial.begin(9600);
}

// Main loop function
void loop() {
  // Qt Input
  if (Serial.available()) {
    char receivedChar = Serial.read(); // Read data from Qt
    incomingData = receivedChar;
    incomingData += Serial.readStringUntil('\n');

    if (receivedChar == '0') {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("doesn't exist");
    } else {
      incomingData.trim(); // Remove any leading or trailing white space
      int separatorIndex = incomingData.indexOf(',');
      if (separatorIndex != -1) { // Check if comma separator exists
        String texte1 = incomingData.substring(0, separatorIndex); // Extract texte1
        String texte2 = incomingData.substring(separatorIndex + 1); // Extract texte2
        displayData(texte1, texte2);
      } else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Invalid data format");
      }
    }
    delay(2000);
  }
}
