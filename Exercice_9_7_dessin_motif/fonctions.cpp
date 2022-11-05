//
// Created by soler on 05/11/2022.
//
#include <iostream>
using namespace std;

#include "fonctions.h"

void Schema_triangle(int n){
    int i = 1;
    while(i <= n){
        int k = 1;
        while(k <= i){
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
}

void Schema_inverse(int n){
    int i = n;
    while(i >= 1) {
        int k = i;
        while (k >= 1) {
            cout << "*";
            k--;
        }
        i--;
        cout << endl;
    }
    cout << endl;
}

void Affiche_char(int n, char* t){
    if(n == 0){
        return ;
    }else{
        cout << t;
        Affiche_char(n-1, t);
    }
}

void Schema_sapin(int n){
    int i = n;
    while(i >= 1){
        //boucle de creation des feuilles du sapin
        Affiche_char(i, " ");
        Affiche_char(n-i+1, "*");
        if(i != n){
            Affiche_char(n-i, "*");
        }
        cout << endl;
        i--;
    }
    int f = 1;
    while(f <= n-1){
        cout << " ";
        f++;
    }
    cout << "|_|";
    cout << endl;
}