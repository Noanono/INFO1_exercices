#include <iostream>
using namespace std;

#include "fonctions.h"

void Table_pythagore(unsigned int x, unsigned int y){
    unsigned int i = 0;

    while(i <= x){
        unsigned int j = 1;
        if(i == 0){
            cout << "  ";
        }else{
            cout << i;
            cout << " ";
        }
        while(j <= y){
            if(i == 0){
                cout << j;
                cout << " ";
            }else{
                cout << j*i;
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}