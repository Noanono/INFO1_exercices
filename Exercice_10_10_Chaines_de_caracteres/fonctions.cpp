//
// Created by soler on 24/11/2022.
//

#include "fonctions.h"

int Longueur_chaine(const char ch[]){

    int i;
    i = 0;

    while(ch[i] != '\0'){
        i++;
    }
    return i;
}

int Nb_voyelles(const char ch[]){

    int i, nb_voy;
    i = 0;
    nb_voy = 0;

    while(ch[i] != '\0'){
        if(ch[i] == 'A' || ch[i] == 'a' || ch[i] == 'E' || ch[i] == 'e' || ch[i] == 'I' || ch[i] == 'i'
        || ch[i] == 'O' || ch[i] == 'o' || ch[i] == 'U' || ch[i] == 'u' || ch[i] == 'Y' || ch[i] == 'y'){
                nb_voy++;
        }
        i++;
    }
    return nb_voy;
}

int Nb_mots(const char ch[]){

    int i, nb_mots;
    i = 0;
    nb_mots = 1;

    while(ch[i] != '\0'){
        if(ch[i] == ' '){
            nb_mots++;
        }
        i++;
    }
    return nb_mots;
}
