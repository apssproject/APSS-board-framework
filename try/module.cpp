/*
 * Air Pollution Scanning System
 * sensors.h
 * Sensors class header file for
 * load and use all plugged sensors following
 * the user's preference for pins.
 * Author: Paride Giunta <paridegiunta@gmail.com>
 */

module::module( char name[10], int[] pins ) {
  this.name = name;
  this.pin_list = pins;
}

void module::start_measuring() {
  return;
}
