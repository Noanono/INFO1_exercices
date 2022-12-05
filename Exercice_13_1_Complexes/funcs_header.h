struct Complexe{
    float re;
    float im;
};


/*
 * R: Saisir un complexe
 * E: vide
 * E/S : vide
 * S: 1 complexe
 */
Complexe saisir_complexe(void);

/*
 * R: Affiche un nombre complexe sous la forme 'a+jb'
 * E: 1 complexe
 * E/S: vide
 * S: vide
 */
void affiche_complexe(Complexe);

/*
 * R: Calcule et retourne le conjugué d'un complexe
 * E: 1 complexe
 * E/S: vide
 * S: 1 complexe
 */
Complexe conjuge(Complexe);

/*
 * R: Calcule et retourne l'opposé d'un complexe
 * E: 1 complexe
 * E/S: vide
 * S: 1 complexe
 */
Complexe opppose(Complexe);

/*
 * R: Calcule et retourne l'inverse d'un complexe
 * E: 1 complexe
 * E/S: vide
 * S: 1 complexe
 */
Complexe inverse(Complexe);

/*
 * R: Calcule et retourne le module d'un complexe
 * E: 1 complexe
 * E/S: vide
 * S: 1 reel
 */
float module(Complexe);

/*
 * R: Calcule et retourne l'argument d'un complexe
 * E: 1 complexe
 * E/S: vide
 * S: 1 reel
 */
float argument(Complexe);