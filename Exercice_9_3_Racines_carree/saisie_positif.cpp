//
// Created by soler on 27/10/2022.
//
#include <iostream>
using namespace std;

double Saisir_positif(void){
    double saisie;

    do{
        cout << "Saisir un reel positif" << endl;
        cin >> saisie;
    } while (saisie <= 0);

    return saisie;
}
