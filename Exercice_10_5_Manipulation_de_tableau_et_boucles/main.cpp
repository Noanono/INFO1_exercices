#include <iostream>
using namespace std;

#include "fonctions.h"

int main() {

    //Lexique : Principal
    const unsigned int TAILLE1 = 70, TAILLE2 = 50;
    int tab1[TAILLE1], tab2[TAILLE2];
    unsigned int tp1, tp2;
    float moy_tab;

    //Algorithme : Principal
    tp1 = Saisie_entiers(tab1, TAILLE1);
    Copie_tab(tab1, tp1, tab2, TAILLE2);
    tp2 = tp1;

    Affiche_tab(tab1, tp1);

    moy_tab = Moyenne_tab(tab1, tp1);
    cout << "La moyenne est de :" << moy_tab << endl;

    if(Tabs_identique(tab1, tp1, tab2, tp2) == 0){
        cout << "tableaux identique" << endl;
        Somme_cumulée(tab1, tp1);
    }

    if(Tabs_identique(tab1, tp1, tab2, tp2) != 0){
        Affiche_tab(tab1, tp1);
    }

    return 0;
}
