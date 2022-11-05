#include <iostream>
using namespace std;

#include "fonctions.h"

int main() {
    double x, racine_a;
    unsigned int ordre;

    x = Saisir_positif();
    cout << "Saisir l'ordre d'apraximation de la racine" << endl;
    cin >> ordre;
    racine_a = Racine_newtonienne(x, ordre);
    cout.precision(10);
    cout << "Racine de " << x << " ~= " << racine_a << " à l'ordre " << ordre << endl;

    return 0;
}
