#include <iostream>
using namespace std;

#include "fibonacci.h"

int main() {
    int a, b, n, f;
    cout << "Saisir deux entiers d'initialisation de la suite :" << endl;
    cin >> a >> b;

    cout << "Saisir l'indice de l'element recherche dans la suite :" << endl;
    cin >> n;

    f = Fibonacci(a, b, n);
    cout << "La valeur en " << n << " de la site est : " << f << endl;

    return 0;
}
