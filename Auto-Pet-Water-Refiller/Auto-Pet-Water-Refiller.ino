#include<WiFi.h>

// Wifi Setup
const char* ssid = "Velazquez";
const char* pswd = "funnyapple448";

// Water Sensor
#define power  5
#define water_sensor 36

int water_percentage = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  pinMode(power, OUTPUT);
  digitalWrite(power, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(power, HIGH);
  water_percentage = analogRead(water_sensor);
  
  delay(5000);

  digitalWrite(power, LOW);
  
  Serial.print("Water Level: ");
  Serial.println(water_sensor);
}
