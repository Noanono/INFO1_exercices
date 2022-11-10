#include <iostream>
using namespace std;

#include "fonctions.h"

int main(){
    unsigned int x;
    cout << "Saisir la taille de la table :" << endl;
    cin >> x;

    Table_pythagore(x);

    return 0;
}