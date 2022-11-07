//
// Created by soler on 08/10/2022.
//
#include <math.h>

#include "../Headers/duree_inso.h"

float Duree_Insolation(float latitude, float delinaison){
    float res;

    res = (24. / M_PI) * acos(-1. * tan(latitude) * tan(delinaison));

    return res;
}