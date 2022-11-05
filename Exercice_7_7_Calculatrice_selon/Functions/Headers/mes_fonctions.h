//
// Created by soler on 17/10/2022.
//

#ifndef EXERCICE_7_7_CALCULATRICE_SELON_MES_FONCTIONS_H
#define EXERCICE_7_7_CALCULATRICE_SELON_MES_FONCTIONS_H

/*R : Affiche le r´esultat de l’op´eration r´ealis´ee ou un message d’erreur dans le
cas d’une division par 0.
E : 1 r´eel correspondant au r´esultat
S : vide*/
void Affiche_resultat(float result);

/*R : Realise, selon l’operateur passe en parametre, des additions, soustractions,
multiplications ou divisions entre deux operandes
E : 2 reels correspondant aux operandes, 1 caractere correspondant au type
d’operation a effectuer
S : 1 reel correspondant au resultat de l’operation*/
float Calculatrice(float a, char op, float b);

#endif //EXERCICE_7_7_CALCULATRICE_SELON_MES_FONCTIONS_H
