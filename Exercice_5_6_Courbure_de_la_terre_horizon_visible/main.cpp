#include <iostream>
using namespace std;

#include "dist_horizon.h"

int main() {
    float dist_sol, taille, dist_horizon;

    cout << "Entrez votre taille puis l'altitude du lieu où vous etes (en m)" << endl;
    cin >> taille >> dist_sol;

    dist_horizon = Dist_horizon(dist_sol, taille);
    cout << "Vous pouvez voir a " << dist_horizon << " km l'horizon" << endl;

    return 0;
}
