#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define LIGHTSPEED 299792458.0
#define MIDDLE_C 261.6256
#define CAL 4184.0

//this file includes functions for converting ccc units to metric units

double meter_To_C_per_Middle_C(double meters){
    return meters*(LIGHTSPEED/MIDDLE_C);
}
double sec_To_Per_Middle_C(double seconds){
    return seconds*(1/MIDDLE_C);
}
double kg_To_Cal_Per_C_Squared(double killograms){
    return killograms*(CAL/(LIGHTSPEED*LIGHTSPEED));
}