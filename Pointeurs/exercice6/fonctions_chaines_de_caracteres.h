//
// Created by noah on 09/01/23.
//

/*
 * R: Calculer puis retourner la longueur d'une chaine de caractere
 * E: 1 adresse de chaine de caractere
 * S: 1 entier posistif
 */
unsigned int Longueur_chaine(const char* str);

/*
 * R: Allouer la zone d'une chaine de caractere recevent la concatenation de deux chaines de caractere
 * E: 2 adresses de chaines de caracteres
 * S: 1 chaine de caractere
 */
char* Concatene_nouvelle(const char* str1, const char* str2);

/*
 * R: Concatener deux chaines de caractere dans la deuxieme chaine
 * E: 2 adresses de chaines de caracteres
 * S: vide
 */
void Concatene_remplace(const char* str1, char* str2);
