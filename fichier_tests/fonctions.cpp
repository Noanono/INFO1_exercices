//
// Created by noah on 15/01/23.
//
#include <iostream>
using namespace std;

#include "fonctions.h"

void mirroir_tab(const float tab_in[], float tab_out[], unsigned int t, unsigned int tr){

    unsigned int i;
    i = 0;

    if(tr >= t){
        while(i < t){
            tab_out[t-i-1] = tab_in[i];
            i++;
        }
    }else{
        cout << "tableau trop petit pour ecrire dedans" << endl;
    }

}