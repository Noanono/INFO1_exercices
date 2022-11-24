#include <iostream>
using namespace std;

#include "fonctions.h"

int main() {

    char chaine[1000];
    unsigned int len, voy, mots;

    cout << "Saisir une chaine de caracteres" << endl;
    cin.getline(chaine, 999);

    len = Longueur_chaine(chaine);
    voy = Nb_voyelles(chaine);
    mots = Nb_mots(chaine);

    cout << "Votre chaine de caractere est de longueur " << len << endl <<
    "Elle comporte " << mots << " mots et " << voy << " voyelles";

    return 0;
}
