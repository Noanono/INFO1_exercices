//
// Created by noah on 03/01/23.
//
#include "Compte.h"

const unsigned int Tmax = 50;
struct Tableau_comptes{
    Compte cpts[Tmax];
    unsigned int tp = 0;
};

/*
 * R: Ajouter un compte a une liste de compte
 * E: 1 compte
 * S: vide
 */
void Ajouter_compte_tab(Tableau_comptes comptes_list, Compte cpt);

/*
 * R: Supprimer un compte du tableau avec son indice
 * E: 1entier : l'indice du compte dans le tableau
 * S: vide
 */
void Supprimer_compte_tab(Tableau_comptes comptes_list, unsigned int indice);

/*
 * R: Retourner le solde total des comptes dans le tableau
 * E: 1 tableau de comptes, 1 entier : sa taille pratique
 * S: 1 reel
 */
float Total_solde(Tableau_comptes comptes_list);