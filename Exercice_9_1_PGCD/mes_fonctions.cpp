//
// Created by soler on 03/11/2022.
//

#include "mes_fonctions.h"

unsigned int Pgcd(unsigned int a, unsigned int b){
    unsigned int a_temp = a;
    unsigned int b_temp = b;
    unsigned int a_reste_b;

    while (b_temp != 0){
        a_reste_b = a_temp % b_temp;
        a_temp = b_temp;
        b_temp = a_reste_b;
    }

    return a_temp;
}