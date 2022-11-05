//
// Created by soler on 10/10/2022.
//
#include <math.h>

#include "dist_horizon.h"

float Dist_horizon(float m_p, float p_y){
    float hauteur, res;

    hauteur = (m_p + p_y) / 1000;
    res = sqrt(pow(hauteur, 2) + 2*hauteur*RAYON_TERRE);

    return res;
}