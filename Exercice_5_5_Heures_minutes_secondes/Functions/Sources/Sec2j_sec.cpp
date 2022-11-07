//
// Created by soler on 08/10/2022.
//
#include <iostream>
using namespace std;

#include "../Headers/Sec2j_sec.h"

int sec_jsec(int secondes){
    int res;

    res = secondes % 60;

    return res;
}