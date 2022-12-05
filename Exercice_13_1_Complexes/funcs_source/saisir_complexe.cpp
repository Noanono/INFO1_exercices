#include <iostream>
using namespace std;

#include "../funcs_header.h"

Complexe saisir_complexe(void){
    Complexe z;

    cout << "Entrez la valeur de la partie réelle de z" << endl;
    cin >> z.re;

    cout << "Entrez la valeur de la partie imaginaire de z" << endl;
    cin >> z.im;

    return z;
}