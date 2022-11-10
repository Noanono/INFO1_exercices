#include <iostream>
using namespace std;

#include "mes_fonctions.h"

int main() {
    unsigned int a;
    unsigned int b;
    cout << "Saisire des entiers :" << endl;
    cin >> a >> b;

    unsigned int pgcd_ab;
    pgcd_ab = Pgcd(a, b);

    cout << "Le Pgcd est de : " << pgcd_ab << endl;

    return 0;
}
