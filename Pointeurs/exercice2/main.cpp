#include <iostream>

using namespace std;

int main() {

    int tab[10];

    int * pi = nullptr;

    pi = &tab[0];

    cout << "l'adresse dans le pointeur est : " << pi << endl;

    *pi = 1;
    cout << "valeur de la premiere case du tableau : " << tab[0] << endl;

    pi = tab;
    cout << "valeur de pi apres pi=tab : " << pi << endl;

    pi++;
    cout << "pi + 1 : " << pi << endl;
    cout << "&tab[1] : " << &tab[1] << endl;
    pi++;
    cout << "pi + 2 : " << pi << endl;
    pi++;
    cout << "pi + 3 : " << pi << endl;

    pi = tab;
    for(int i = 0; i < 10; i++){
        //pi++;

        pi[i] = i*i;

        cout << i << " ==> " << tab[i] << endl;
    }

    return 0;
}
