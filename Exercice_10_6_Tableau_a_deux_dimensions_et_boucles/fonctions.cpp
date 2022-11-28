//
// Created by soler on 28/11/2022.
//

#include "fonctions.h"

void PermuterLignes(int ligne1, int ligne2, int tp, int tab[][1000]){
    int temp;
    for (int i = 0; i < tp; i++) {
        temp = tab[ligne2 - 1][i];
        tab[ligne2 - 1][i] = tab[ligne1 - 1][i];
        tab[ligne1 - 1][i] = temp;
    }
}