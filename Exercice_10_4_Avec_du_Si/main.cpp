#include <iostream>
using namespace std;

#include "fonction.h"

int main() {

    //Lexique : Principal
    float tab[3];
    unsigned int tp;

    //Algorithme : Principal
    Saisie_ordon(tab);
    tp = 3;
    cout << "{" << tab[0] << ";" << tab[1] << ";" << tab[2] << "}" << endl;

    return 0;
}
