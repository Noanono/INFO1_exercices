#include <iostream>
using namespace std;

#include "../funcs_header.h"

Complexe inverse(Complexe z){
    Complexe un_sur_z;

    un_sur_z.re = 1.0/z.re;
    un_sur_z.im = 1.0/z.im;

    return un_sur_z;
}