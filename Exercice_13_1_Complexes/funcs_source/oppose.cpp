#include <iostream>
using namespace std;

#include "../funcs_header.h"

Complexe oppose(Complexe z){

    Complexe moins_z;

    moins_z.re = -z.re;
    moins_z.im = -z.im;

    return moins_z;
}