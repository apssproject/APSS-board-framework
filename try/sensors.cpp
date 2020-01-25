/*
 * Air Pollution Scanning System
 * sensors.h
 * Sensors class header file for
 * load and use all plugged sensors following
 * the user's preference for pins.
 * Author: Paride Giunta <paridegiunta@gmail.com>
 */
using namespace std;

#define LCD { 8, 9, 4, 5, 6, 7 }
#define DHT { 22 }

#include "sensors.h"
#include "module.h"

sensors::sensors() {

  #ifndef LCD
    #include "LiquidCrystal.h"
    this.sensor.push_back( name:"LCD", value:new module( "LCD", LCD ) );
    this.sensor["LCD"].
  #endif

  #ifndef DHT
    #include "SimpleDHT.h"
    this.sensor.push_back( name:"DHT", value:new module( "DHT", DHT ) );
  #endif

}
