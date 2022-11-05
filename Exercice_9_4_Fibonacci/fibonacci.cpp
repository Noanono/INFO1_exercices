//
// Created by soler on 05/11/2022.
//

#include "fibonacci.h"

int fibonacci(int a, int b, int n){
    switch (n) {
        case 0:
            return a;
            break;

        case 1:
            return b;
            break;

        default:
            return fibonacci(a, b, n-1) + fibonacci(a, b, n-2);
            break;
    }
}