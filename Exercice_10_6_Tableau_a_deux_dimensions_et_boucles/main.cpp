#include <iostream>
using namespace std;

#include "fonctions.h"

int main() {

    int tab[4][6] = [[46  ,348,384 ,34 ,120,1  ],
                     [92  ,20 ,120 ,129,12 ,129],
                     [1299,129,0120,102,102,1  ],
                     [114 ,95 ,3485,57 ,980,56 ]];
    int x, y;
    int i;

    //Permute les lignes
    cout << "Entrez les deux lignes a permuter : " << endl;
    cin >> x >> y;

    PermuterLignes(x, y, 6, tab);

    cout << "Ligne " << x << " et ligne " << y << " ont ete permutées." << endl;

    // Affichage du tableau
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
