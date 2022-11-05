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
    while(i >= 1){
        int k = i;
        while(k >= 1){
            cout << "*";
            k--;
        }
        cout << endl;
        i--;
    }
    cout << endl;
}

void Schema_sapin(int n){

}