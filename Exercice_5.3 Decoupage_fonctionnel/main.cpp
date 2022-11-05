#include <iostream>
using namespace std;

#include "Functions/Headers/Affiche.h";
#include "Functions/Headers/Surf.h";
#include "Functions/Headers/Peri.h";
#include "Functions/Headers/Saisie_rayon.h";
#include "Functions/Headers/pres.h"
#include "Functions/Headers/vol.h"
#include "Functions/Headers/velo_dist.h"

int main() {
    float r, peri, surf;
    Presentation();

    r = Saisie_rayon();

    peri = Perimetre(r);
    surf = Surface(r);

    Affiche_resultats(peri, surf);

    float h, vol, dist;
    int nb_tours;

    cout << "Entrez une hauteru d'un cilindre : " << endl;
    cin >> h;

    vol = Calc_volume(surf, h);

    cout << "Entrez le nombre de tour effectué par une roue de vélo : " << endl;
    cin >> nb_tours;

    dist = Dist_velo(nb_tours, peri);

    cout << "Le volume est de : " << vol << endl << "La distance parcourue par le velo est de : " << dist << endl;

    return 0;
}
