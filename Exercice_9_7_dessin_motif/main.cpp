#include <iostream>
using namespace std;

#include "fonctions.h"

int main() {
    int nb_etoiles;
    cout << "Saisir la taille de la plus grande ligne d'etoile :" << endl;
    cin >> nb_etoiles;


    Schema_triangle(nb_etoiles);
    Schema_inverse(nb_etoiles);
    Schema_sapin(nb_etoiles);


    return 0;
}
