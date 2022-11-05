//
// Created by soler on 08/10/2022.
//
#include <iostream>
using namespace std;

#include <math.h>

#include "../Headers/Declin.h"

float Declinaison(int jour){
    float res;

    res = asin(0.398* sin(0.0171915*jour-1.3962634));

    return res;
}