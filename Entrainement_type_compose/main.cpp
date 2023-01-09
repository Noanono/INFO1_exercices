#include <iostream>

using namespace std;

#include "Comptes_tab.h"

int main() {

    Personne noah;
    noah = Creer_personne();

    Affich_personne(noah);

    Compte cpt_noah;
    cpt_noah = Creer_compte();

    Affich_compte(cpt_noah);

    Tableau_comptes cpts_list;
    Ajouter_compte_tab(cpts_list, cpt_noah);
    Total_solde(cpts_list);
    Supprimer_compte_tab(cpts_list, 0);
    Total_solde(cpts_list);

    return 0;
}
