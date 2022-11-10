#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

#include "fonctions.h"

void Table_pythagore(unsigned int x) {
    unsigned int i = 0;
    unsigned int n;

    n = log10(pow(x, 2)) + 1;

    while(i <= x){
        unsigned int j = 1;
        if(i == 0){
            cout << setw(n) << setfill(' ') << " ";
        }else{
            cout << setw(n) << setfill(' ') << i;
        }
        cout << " ";
        while(j <= x){
            if (i == 0){
                cout << setw(n) << setfill(' ') << j;
            }else{
                cout << setw(n) << setfill(' ') << i * j;
            }
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}