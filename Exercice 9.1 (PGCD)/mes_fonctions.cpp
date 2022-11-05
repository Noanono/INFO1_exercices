//
// Created by soler on 03/11/2022.
//

#include "mes_fonctions.h"

unsigned int pgcd(unsigned int a, unsigned int b){
    if (b == 0){
        return a;
    }else/*b != 0*/{
        return pgcd(b, a % b);
    }
}