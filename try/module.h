/*
 * Air Pollution Scanning System
 * sensors.h
 * Sensors class header file for
 * load and use all plugged sensors following
 * the user's preference for pins.
 * Author: Paride Giunta <paridegiunta@gmail.com>
 */

class module
{
  public:

    module( char name[10], int[] pins );

    void start_measuring();

    void name( char name[10] );

    char[] name();

    void pin_list( int [] list );

    int[] pin_list();


  private:
    
    int [] pin_list;

    char name[10];
};
