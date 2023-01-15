//
// Created by noah on 09/01/23.
//

#include "fonctions_chaines_de_caracteres.h"

unsigned int Longueur_chaine(const char* str){

    unsigned int len = 0;
    while(str[len] != '\0'){
        len++;
    }

    return len;
}

char* Concatene_nouvelle(const char* str1, const char* str2){

    //Allocation de la zone
    unsigned int len1 = Longueur_chaine(str1);
    unsigned int len2 = Longueur_chaine(str2);
    unsigned int len = len1 + len2 + 1;
    char* p_strc = new char[len];

    //Ajout des caracteres de str1
    for(int i = 0; str1[i] != '\0'; i++){
        *(p_strc + i) = str1[i];
    }

    //Ajout des caracteres de str2
    for(int i = 0; str2[i] != '\0'; i++){
        *(p_strc + i + len1) = str2[i];
    }

    p_strc[len - 1] = '\0';

    return p_strc;
}

void Concatene_remplace(const char* str1, char* str2){

    *str2 = *Concatene_nouvelle(str1, str2);

}
