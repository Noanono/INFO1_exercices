//
// Created by noah on 03/01/23.
//
struct Personne{
    char  nom[30];
    char prenom[30];
    unsigned int age;
};

/*
 * R: Demander à l'utilisateur des renseignements sur la personne
 * E: vide
 * S: 1 Personne
 */
Personne Creer_personne(void);

/*
 * R: Afficher le type peronne en console
 * E: 1 Personne
 * S: vide
 */
void Affich_personne(Personne p);