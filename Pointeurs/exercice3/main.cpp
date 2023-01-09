#include <iostream>
using namespace std;

#include "echange_val.h"

int main() {

    float x, y;

    x = 4.2;
    y = 5.4;

    cout << "val x : "  << x << " val y : " << y << endl;
    Echangef(x, y);
    cout << "val x : "  << x << " val y : " << y << endl;

    return 0;
}
