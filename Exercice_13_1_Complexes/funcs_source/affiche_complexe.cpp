#include <iostream>
using namespace std;

#include "../funcs_header.h"

void affiche_complexe(Complexe z){

    cout << "z = ";

    if(z.re == z.im && z.re == 0){
        cout << "0" << endl;
    }else{// z.re != z.im || z.re != 0
        if(z.re == 0){
            if(z.im < 0){
                cout << "- j" << -z.im << endl;
            }else{// z.im > 0
                cout << "j" << z.im << endl;
            }
        }else{// z.re != 0
            if(z.im == 0){
                cout << z.re << endl;
            }else{// z.im != 0
                if(z.im < 0){
                    cout << z.re << " - j" << -z.im << endl;
                }else{// z.im > 0
                    cout << z.re << " + j" << z.im << endl;
                }
            }
        }
    }
}