#include <iostream>
using namespace std;

#include "funcs_header.h"

int main(){

    Complexe z = saisir_complexe();
    Complexe z_barre = conjuge(z);
    Complexe moins_z = oppose(z);
    Complexe un_sur_z = inverse(z);

    float module_de_z = module(z);
    float argument_de_z = argument(z);

    affiche_complexe(z);
    affiche_complexe(z_barre);
    affiche_complexe(moins_z);
    affiche_complexe(un_sur_z);

    cout << "|z| = " << module_de_z << endl;
    cout << "Arg(z) = " << argument_de_z << endl;

    return 0;
}