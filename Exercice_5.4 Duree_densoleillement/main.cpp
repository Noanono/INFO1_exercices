#include <iostream>
using namespace std;

#include "Functions/Headers/duree_inso.h"
#include "Functions/Headers/Declin.h"

int main() {
    float lat, dec, d_i;
    int j;

    cout << "Entrez un jour (1 pour le premier janvier) : " << endl;
    cin >> j;

    cout << "Entrez une latitude en degré : " << endl;
    cin >> lat;

    dec = Declinaison(j);
    d_i = Duree_Insolation(lat, dec);

    cout << "La duree d'insolation au jour " << j << endl << " de l'annee a une latitude de " << lat << " degres" <<
            endl << "est de : " << d_i << "h" << endl;

    return 0;
}
