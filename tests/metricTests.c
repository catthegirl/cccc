#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>

#include "../cccc.h"

//compares two bools using a maximum_error based on machine epsilon
bool compare_double(double a, double b, double maximum_rel_error){
    return (((a-b)/(a*DBL_EPSILON))<maximum_rel_error);
}

void assert_is_euqal_double(double variable,double constant){
    if(!compare_double(constant,variable,2)){
        fprintf(stderr, "Assertion failed\nExpected %lf got %lf\n", constant, variable);
        abort();
    }
}

int main(){
    assert_is_euqal_double(
        Meter_To_C_Per_Middle_C(3.14),
        3598074.1873883
    );
    printf("All Tests Passed\n");
}