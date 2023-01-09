//
// Created by noah on 03/01/23.
//
#include <iostream>

using namespace std;

#include "Personne.h"

Personne Creer_personne(void){
    Personne prsn;

    cout << "Entrez votre nom (max 30 car.) :" << endl;
    cin >> prsn.nom;

    cout << "Entrez votre prenom (max 30 car.) :" << endl;
    cin >> prsn.prenom;

    cout << "Entrez votre age :" << endl;
    cin >> prsn.age;

    return prsn;
}

void Affich_personne(Personne p){

    cout << "Le prenom est : " << p.prenom << endl;
    cout << "Le nom est : " << p.nom << endl;
    cout << "L'age est : " << p.age << endl;

}