#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define the pin connections
const int mq7Pin = 34;        // MQ7 sensor analog pin
const int buzzerPin = 5;      // Buzzer pin

const int trigPin = 25;
const int echoPin = 18;
//const int ledPin = 2;

const int thresholdDistance = 25;

// Define the gas level threshold
const int threshold = 500;    // Example threshold value, adjust as needed
long duration;
int distance;
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Configure the sensor and buzzer pins
  pinMode(mq7Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW); // Ensure the buzzer is off initially
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(ledPin, OUTPUT);
  //digitalWrite(ledPin, LOW);
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
  lcd.clear(); // Clear the LCD display
  
}

void loop() {
  // Read the gas level from the MQ7 sensor
  int gasLevel = analogRead(mq7Pin);

  // Display the gas level on the Serial Monitor
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  // Check if the gas level exceeds the threshold
  if (gasLevel > threshold) {
    // Activate the buzzer
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Gas warning!");
    delay(500);
    
  } else {
    // Deactivate the buzzer
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Normal Gas level");
    delay(500);
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(500);

  lcd.clear();
  lcd.setCursor(0, 0);

   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Turn on LED if distance is below threshold
  if (distance <= thresholdDistance) {
    lcd.print("Obstacle ahead");
  } else {
    lcd.print("Road clear");
  }

  delay(500);
}