#include <iostream>
using namespace std;

#include "../funcs_header.h"

Complexe conjuge(Complexe z){
    Complexe z_barre;

    z_barre.re = z.re;
    z_barre.im = -z.im;

    return z_barre;
}