#include <iostream>
using namespace std;

#include "mes_fonctions.h"

int main() {
    unsigned int a;
    unsigned int b;
    cout << "Saisire des entiers :" << endl;
    cin >> a >> b;

    unsigned int pgcd_ab;
    pgcd_ab = pgcd(a, b);

    return 0;
}
