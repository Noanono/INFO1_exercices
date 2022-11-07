#include <iostream>
using namespace std;

#include "vol_sphere.h"
#include "tva.h"

int main() {
    float r, vol;

    cout << "Entrez le rayon de la sphere en cm : " << endl;
    cin >> r;

    vol = vol_sphere(r);

    cout << "Le volume de la sphere est de : " << vol << "cm3" << endl;

    float prix_ht, nb_artcls, tva, prix_tot;

    cout << "Entrez le prix hors taxe, le nombre d'article, puis la TVA en pourcentage (ex: 20 pour 20%) : " << endl;
    cin >> prix_ht;
    cin >> nb_artcls;
    cin >> tva;

    prix_tot = prix_ttc(prix_ht, nb_artcls, tva);

    cout << "Le prix total est de  : " << prix_tot << "e" << endl;

    return 0;
}
