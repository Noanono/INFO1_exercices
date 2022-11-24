//
// Created by soler on 24/11/2022.
//
#include <iostream>
#include "fonction.h"

void Saisie_ordon(float tab[]){

    //Lexique : Local
    float temp;

    //Algorithme : Local
    std::cout << "Entrez une 1ere valeur" << std::endl;
    std::cin >> tab[0];

    std::cout << "Entrez une 2eme valeur" << std::endl;
    std::cin >> temp;

    if(temp > tab[0]){
        tab[1] = temp;
    }else{
        tab[1] = tab[0];
        tab[0] = temp;
    }

    std::cout << "Entrez une 3eme valeur" << std::endl;
    std::cin >> temp;

    if(temp > tab[1]){
        tab[2] = temp;
    }else{
        if(temp > tab[0]){
            tab[2] = tab[1];
            tab[1] = temp;
        }else{
            tab[2] = tab[1];
            tab[1] = tab[0];
            tab[0] = temp;
        }
    }

}
