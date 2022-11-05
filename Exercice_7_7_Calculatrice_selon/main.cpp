#include <iostream>
using namespace std;

#include "Functions/Headers/mes_fonctions.h"

int main() {
    float a, b, res;
    char op;
    cout << "Sasir le calcul sous la forme (a op b) :" << endl;
    cin >> a >> op >> b;

    res = Calculatrice(a, op, b);
    Affiche_resultat(res);

    return 0;
}
