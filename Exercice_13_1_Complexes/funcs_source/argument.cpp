#include <iostream>
using namespace std;
#include <math.h>

#include "../funcs_header.h"

float argument(Complexe z){

    float argument;

    if(z.im == 0){
        argument = M_PI;
    }else{
        if(z.re == 0){
            argument = 2 * M_PI;
        }else {
            argument = 2 * atan(z.im / (z.re + module(z)));
        }
    }

    return argument;
}