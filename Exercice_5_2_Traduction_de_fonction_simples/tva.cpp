//
// Created by soler on 06/10/2022.
//

#include "tva.h"

float prix_ttc(float prix_ht, int nb, float tva){
    int tot;

    tot = (nb * prix_ht) * (1. + tva/100);
    return tot;
}