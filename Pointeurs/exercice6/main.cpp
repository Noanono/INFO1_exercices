#include <iostream>
using namespace std;

#include "fonctions_chaines_de_caracteres.h"

int main() {
    unsigned int nb_c;
    cout << "Quel est le nombre maximal de caractères à saisir ?";
    cin >> nb_c;

    char* p_str = new char[nb_c+1];
    cout << "Saisir votre chaine: ";
    cin >> p_str;

    unsigned int nb_c2;
    cout << "Quel est le nombre maximal de caractères à saisir ?";
    cin >> nb_c2;

    char* p_str2 = new char[nb_c2+1];
    cout << "Saisir votre chaine: ";
    cin >> p_str2;

    //Appels des fonctions
    cout << "longueur de la chaine de caractere : " << Longueur_chaine(p_str) << endl;

    char* p_strc = Concatene_nouvelle(p_str, p_str2);
    cout << "Chaine concatene : " << p_strc << endl;

    Concatene_remplace(p_str, p_strc);
    cout << "Chaine concatene : " << p_strc << endl;

    //Désalocation de la zone allouée pour recevoir la saisie initiale
    delete [] p_str;
    delete [] p_str2;
    delete [] p_strc;

    return 0;
}
