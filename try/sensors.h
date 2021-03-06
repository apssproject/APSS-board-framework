/*
 * Air Pollution Scanning System
 * sensors.h
 * Sensors class header file for
 * load and use all plugged sensors following
 * the user's preference for pins.
 * Author: Paride Giunta <paridegiunta@gmail.com>
 */

using namespace std;

 class sensors
 {
   public:
     sensors( int pin );
     void start_measuring();
     void start_measuring( sensors [] );
     std::vector < sensor > sensor;
 };
