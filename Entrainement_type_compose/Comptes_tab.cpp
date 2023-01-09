//
// Created by noah on 03/01/23.
//
#include <iostream>

using namespace std;

#include "Comptes_tab.h"

void Ajouter_compte_tab(Tableau_comptes list, Compte cpt){
    if (list.tp >= Tmax){
        cerr << "cannot add in full tab" << endl;
    }else{
        list.cpts[list.tp] = cpt;
        list.tp++;
    }
}

void Supprimer_compte_tab(Tableau_comptes list, unsigned int indice){
    if(list.tp <= indice){
        cerr << "no var here" << endl;
    }else{
        int temp_i = indice;
        while(temp_i < list.tp){
            list.cpts[temp_i] = list.cpts[temp_i + 1];
            temp_i++;
        }
        list.tp--;
    }
}

float Total_solde(Tableau_comptes list){
    float res = 0;
    int i = 0;

    while(i < list.tp){
        res += list.cpts[i].solde;
        i++;
    }

    return res;
}
