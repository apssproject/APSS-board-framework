/*
 * Air Pollution Scanning System
 * sensors.h
 * Sensors class header file for
 * load and use all plugged sensors following
 * the user's preference for pins.
 * Author: Paride Giunta <paridegiunta@gmail.com>
 */

#define LCD
#define DHT

#ifndef LCD
  #include "LiquidCrystal.h"
#endif

#ifndef DHT
  #include "SimpleDHT.h"
#endif

 class sensors
 {
   public:
     sensors(int pin);
   private:
     int _pin;
 };
