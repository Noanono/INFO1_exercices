//
// Created by soler on 27/10/2022.
//

double Racine_newtonienne(double a, unsigned int n){
    double u_n = 1;
    unsigned int i = 0;

    while (i <= n){
        u_n = (u_n + ( a / u_n )) / 2;
        i++;
    }

    return u_n;
}