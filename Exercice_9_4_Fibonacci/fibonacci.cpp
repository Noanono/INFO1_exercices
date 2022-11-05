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
            return Fibonacci(a, b, n - 1) + Fibonacci(a, b, n - 2);
            break;
    }
}