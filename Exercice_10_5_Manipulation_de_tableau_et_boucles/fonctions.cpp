//
// Created by soler on 24/11/2022.
//
#include <iostream>
#include "fonctions.h"

void Copie_tab(const int tab1[], int tp1, int tab2[], unsigned int tr2){

    if(tr2 < tp1){
        std::cout << "Copie impossible" << std::endl;
    }else{
        for(int i = 0; i < tp1; i++){
            tab2[i] = tab1[i];
        }
    }
}

void Affiche_tab(const int tab[], int tp){

    int i;
    std::cout << "{";
    if(tp != 0){
        i = 0;
        while(i < tp - 1){
            std::cout << tab[i] << ";";
            i++;
        }
        std::cout << tab[i];
    }
    std::cout << "}" << std::endl;
}

int Tabs_identique(const int tab1[], int tp1, const int tab2[], int tp2){

    int identique;
    int i;

    identique = 1;
    if(tp1 == tp2){
        i = 1;
        while(tab1[i-1] == tab2[i-1] && i < tp1){
            i++;
        }
        if(i == tp1 && tab1[i-1] == tab2[i-1]){
            identique = 0;
        }
    }

    return identique;
}

float Moyenne_tab(const int tab[], int tp){

    float moy;
    moy = .0;
    if(tp != 0) {
        for (int i = 0; i < tp; i++) {
            moy += tab[i];
        }
        moy = moy/tp;
    }

    return moy;
}

void Somme_cumulée(int tab[], int tp){

    for(int i = 1; i < tp; i++){
        tab[i] += tab[i-1];
    }
}

int Saisie_entiers(int tab[], unsigned int tr){

    int i;
    i = 0;

    if(tr != 0) {

        std::cout << "Ecrire une valeur (-1 pour stopper)" << std::endl;
        std::cin >> tab[i];
        while(tab[i] != -1 && i<tr-1){
            i++;
            std::cout << "Ecrire une valeur (-1 pour stopper)" << std::endl;
            std::cin >> tab[i];
        }

        if(tab[i] != -1){
            i++;
        }
    }
    return i;
}