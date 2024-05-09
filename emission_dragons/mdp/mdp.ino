#include <Keypad.h>

#define pin_buzzer 12

const byte ROWS = 4;
const byte COLS = 4;
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

const int MAX_PASSWORD_LENGTH = 6;
char enteredPassword[MAX_PASSWORD_LENGTH + 1]; // +1 for null terminator
int passwordIndex = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin_buzzer, OUTPUT);
}

void loop() {
  char customKey = customKeypad.getKey();

  if (customKey != NO_KEY) {
    if (customKey == '#') {
      if (passwordIndex > 0) { // Validate password length
        enteredPassword[passwordIndex] = '\0'; // Add null terminator to make it a C-string
        Serial.println(String(enteredPassword)); // Display entered password on serial monitor
        passwordIndex = 0; // Reset password index for next input
        
      }
    } else {
      if (passwordIndex < MAX_PASSWORD_LENGTH) { // Check if there is space to add more characters
        enteredPassword[passwordIndex++] = customKey; // Store the entered key and increment index
        Serial.print(customKey); // Display entered character on serial monitor
        digitalWrite(pin_buzzer, HIGH);//ykhadem buzzer 1 s
        delay(100); 
        noTone(pin_buzzer); 
        delay(100); // Attendre pendant 0.1 seconde
        digitalWrite(pin_buzzer, LOW); // y9ps
      }
    }
  }

  while (Serial.available() > 0) {
    char data = Serial.read();
    if (data == '0') {
      digitalWrite(pin_buzzer, LOW); // Turn off the buzzer
    } else if (data == '1') {
      digitalWrite(pin_buzzer, HIGH); // Turn on the buzzer
      delay(1000); // Buzzer on for 1 second
      digitalWrite(pin_buzzer, LOW); // Turn off the buzzer
    }
  }
}
