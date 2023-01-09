#include <iostream>
using namespace std;

int main() {

    float x, y;
    float * p_f;

    p_f = &x;
    *p_f = -2.3;
    cout << "valeur dans x : " <<  x << endl;

    cout << "adresse dans p_f : " << p_f << endl;
    cout << "adresse de x : " << &x << endl;
    cout << "adresse de y : " << &y << endl;

    p_f = &y;
    *p_f = 7.4;
    cout << "valeur dans y : " <<  y << endl;

    cout << "adresse dans p_f : " << p_f << endl;
    cout << "adresse de x : " << &x << endl;
    cout << "adresse de y : " << &y << endl;

    cout << "valeur dans x : " << x << endl;

    return 0;
}
