//
// Created by soler on 05/11/2022.
//

#include "fibonacci.h"

unsigned int Fibonacci(unsigned int a, unsigned int b, unsigned int n){
    unsigned int a_temp = a;
    unsigned int b_temp = b;
    unsigned int f;

    switch (n) {
        case 0:
            f = a;
            break;

        case 1:
            f = b;
            break;

        default:
            //Fibonacci en itératif
            f = 0;
            for (int i = 2; i <= n; i++) {
                f = a_temp + b_temp;
                a_temp = b_temp;
                b_temp = f;
            }
            break;
    }
    return f;
}