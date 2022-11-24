//
// Created by soler on 24/11/2022.
//

#ifndef EXERCICE_10_5_MANIPULATION_DE_TABLEAU_ET_BOUCLES_FONCTIONS_H
#define EXERCICE_10_5_MANIPULATION_DE_TABLEAU_ET_BOUCLES_FONCTIONS_H

/*
 * R: Copier untableau d'entiers (ces elements) dans un autre tableau
 * E: 1 tableau d'entiers : le tableau à copier, 1 entier : sa taille pratique, 1 entier : la taille reelle du deuxieme tableau
 * E/S: 1 tableau d'entiers : celui qui recoit les elements
 * S: vide
 */
void Copie_tab(const int tab1[], int tp1, int tab2[], unsigned int tr2);

/*
 * R: Afficher les elements d'un tableu sous la forme {e1;e2;..;en}
 * E: 1 tableau d'entiers : le tableau à afficher, 1 entier : sa taille pratique
 * E/S: vide
 * S: vide
 */
void Affiche_tab(const int tab[], int tp);

/*
 * R: Tester si deux tableaux sont identiques
 * E: 2 tableaux : les tableaux à tester, 2 entiers : leur taille pratique
 * E/S: vide
 * S: 1 entier
 */
int Tabs_identique(const int tab1[], int tp1, const int tab2[], int tp2);

/*
 * R: Calculer la moyenne des elements d'un tableau
 * E: 1 tableau d'entiers : le tableau à tester, 1 entier : sa taille pratique
 * E/S: vide
 * S: 1 reel : la moyenne
 */
float Moyenne_tab(const int tab[], int tp);

/*
 * R: Remplacer les valeurs d'un tableau par sa somme cumulée
 * E: 1 entier : la taille pratique du tableau
 * E/S: 1 tableau d'entiers : le tableau à modifier
 * S: vide
 */
void Somme_cumulée(int tab[], int tp);



int Saisie_entiers(int tab[], unsigned int tr);

#endif //EXERCICE_10_5_MANIPULATION_DE_TABLEAU_ET_BOUCLES_FONCTIONS_H
