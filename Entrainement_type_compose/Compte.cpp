//
// Created by noah on 03/01/23.
//
#include <iostream>

using namespace std;

#include "Compte.h"

Compte Creer_compte(void){
    Compte cpt;

    cpt.titulaire = Creer_personne();
    cpt.numero = 1;
    cpt.solde = 0;

    return cpt;
}

void Affich_compte(Compte cpt){

    Affich_personne(cpt.titulaire);

    cout << "Le numero de compte est : " << cpt.numero << endl;
    cout << "Le solde est de : " << cpt.solde << endl;

}
