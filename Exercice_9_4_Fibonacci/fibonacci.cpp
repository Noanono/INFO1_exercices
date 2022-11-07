//
// Created by soler on 05/11/2022.
//

#include "fibonacci.h"

int Fibonacci(int a, int b, int n){

    switch (n) {
        case 0:
            return a;
            break;

        case 1:
            return b;
            break;

        default:
            //Fibonacci en itératif
            int f = 0;
            for (int i = 2; i <= n; i++) {
                f = a + b;
                a = b;
                b = f;
            }
            return f;
            break;
    }
}