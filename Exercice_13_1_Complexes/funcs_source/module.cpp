#include <iostream>
using namespace std;
#include <math.h>

#include "../funcs_header.h"

float module(Complexe z){

    float module;

    module = sqrt(pow(z.re, 2) + pow(z.im, 2));

    return module;
}