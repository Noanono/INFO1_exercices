//
// Created by soler on 08/10/2022.
//

#include "../Headers/Sec2min.h"

int sec_min(int secondes){
    int res;

    res = (secondes % 3600) / 60;


    return res;
}