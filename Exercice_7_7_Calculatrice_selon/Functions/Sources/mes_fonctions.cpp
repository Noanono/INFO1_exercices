//
// Created by soler on 17/10/2022.
//
#include <iostream>
using namespace std;

#include "../Headers/mes_fonctions.h"

float Calculatrice(float a, char op, float b){
    float res;

    switch (op) {
        case '+': res = a + b;
            break;
        case '-': res = a - b;
            break;
        case '*': res = a * b;
            break;
        case '/': res = a / b;
            break;
        default: res = 0;
    }

    return res;
}

void Affiche_resultat(float result){
    cout << "Ce calcul a pour resultat : " << result << endl;
}
