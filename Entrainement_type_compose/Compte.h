//
// Created by noah on 03/01/23.
//
#include "Personne.h"

struct Compte{
    Personne titulaire;
    unsigned int numero;
    float solde;
};

/*
 * R: Creer un compte a partir de rien
 * E: vide
 * S: 1 Compte
 */
Compte Creer_compte(void);

/*
 * R: Afficher un compte
 * E: 1 Compte
 * S: vide
 */
void Affich_compte(Compte cpt);


