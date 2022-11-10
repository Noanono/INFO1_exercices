#include <iostream>
using namespace std;
#include <iomanip>

#include "fonctions.h"

void Table_pythagore(unsigned int x, unsigned int y){
    unsigned int i = 0;

    while(i <= x){
        unsigned int j = 1;
        if(i == 0){
            cout << setw(4) << setfill(' ') << " ";
        }else{
            cout << setw(4) << setfill(' ') << i;
        }
        cout << " ";
        while(j <= y){
            if(i == 0){
                cout << setw(4) << setfill(' ') << j;
            }else{
                cout << setw(4) << setfill(' ') << i * j;
            }
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}