#include "LiquidCrystal.h"
#include "SimpleDHT.h"

#include "sensors.h"

int analog_port = 0;
int pinDHT11 = 22;

char str[4];

SimpleDHT11 dht11;
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {

  sensors s = new sensors();
  sensors.sensor[]
  Serial.begin(9600);
  Serial1.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Air Pollution");
  lcd.setCursor(0,1);
  lcd.print("Scanning System");
  delay(1000);
  lcd.clear();
}

void loop() {
  byte temperature = 0;
  byte humidity = 0;
  if (dht11.read(pinDHT11, &temperature, &humidity, NULL))
    return;
  lcd.setCursor(0,0);
  lcd.print(humidity);
  lcd.setCursor(0,1);
  lcd.print(temperature);
  delay(500);
  int i=0;
  if (Serial1.available()) {
    delay(100); //allows all serial sent to be received together
    while(Serial1.available() && i<4) {
      str[i++] = Serial1.read();
    }
    str[i++]='\0';
  }
  if(i>0) {
    Serial.print(str);
  }
}
