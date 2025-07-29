#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define LIGHTSPEED 299792458.0
#define MIDDLE_C 261.6256
#define CAL 4184.0

//this file includes functions for converting ccc units to metric units and vice versa

double meter_To_C_per_Middle_C(double meters){
    return meters*(LIGHTSPEED/MIDDLE_C);
}
double sec_To_Per_Middle_C(double seconds){
    return seconds*(1/MIDDLE_C);
}
double kg_To_Cal_Per_C_Squared(double killograms){
    return killograms*(CAL/(LIGHTSPEED*LIGHTSPEED));
}
double C_Per_Middle_C_To_Meters(double C_Per_Middle_Cs){
    return C_Per_Middle_Cs*(MIDDLE_C/LIGHTSPEED);
}
double Per_Midle_C_To_Secs(double Per_Middle_Cs){
    return Per_Middle_Cs*MIDDLE_C;
}
double Cal_Per_C_Squared_To_Kg(double Cal_Per_C_Squared){
    return Cal_Per_C_Squared*((LIGHTSPEED*LIGHTSPEED)/CAL)
}