#include <iostream>
using namespace std;
#include <iomanip>

#include "fonctions.h"

void Table_pythagore(unsigned int x, unsigned int y){
    unsigned int i = 1;

    while(i <= x){
        unsigned int j = 1;
        if(i == 1){
            cout << setw(4) << setfill(' ') << " ";
        }else{
            cout << setw(4) << setfill(' ') << i-1;
        }
        cout << " ";
        while(j <= y){
            cout << setw(4) << setfill(' ') << i * j;
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}