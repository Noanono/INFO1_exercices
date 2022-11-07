//
// Created by soler on 06/10/2022.
//

#include "vol_sphere.h"

float vol_sphere(float r){
    float vol;
    const float PI = 3.141592;

    vol = (4./3)*(PI*(r*r*r));
    return vol;
}