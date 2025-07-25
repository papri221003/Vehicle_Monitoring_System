#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 2);
const int xPin = A0;  // X-axis
const int yPin = A1;  // Y-axis
const int zPin = A2;  // Z-axis

const int impactThreshold = 180;  // Adjust this threshold value for impact detection


void setup()
{
  
  Serial.begin(9600);
  
 
  mySerial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(zPin, INPUT);


  Serial.println("Initializing..."); 
  delay(1000);

  
}

void loop()
{
  // Read the accelerometer values
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  int zValue = analogRead(zPin);

   // Calculate the total acceleration
  int totalAcceleration = sqrt(sq(xValue - 512) + sq(yValue - 512) + sq(zValue - 512));

   // Check if the impact threshold is exceeded
  if (totalAcceleration > impactThreshold) 
  {
  Serial.println("Accident alert !");
  mySerial.println("AT");
  updateSerial();

  mySerial.println("AT+CMGF=1"); 
  updateSerial();
  mySerial.println("AT+CMGS=\"+918017050547\""); // enter your phone number here (prefix country code)
  updateSerial();
  mySerial.println("Impact Detected!");
  updateSerial();
  mySerial.println("Latitude - 22.576282"); // enter your message here
  updateSerial();
  mySerial.println("Longitude - 88.426984");
  updateSerial();
  mySerial.print("https://maps.app.goo.gl/En7p44Gw1vsDcTGNA");
  updateSerial();
  mySerial.write(26);
    
  }


  

}

void updateSerial()
{
  delay(500);
  while (Serial.available()) 
  {
    mySerial.write(Serial.read());//Forward what Serial received to Software Serial Port
  }
  while(mySerial.available()) 
  {
    Serial.write(mySerial.read());//Forward what Software Serial received to Serial Port
  }
}