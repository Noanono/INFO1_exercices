//
// Created by soler on 05/11/2022.
//

#include "fibonacci.h"

int fibonacci(int a, int b, int n){
    if(n == 0){
        return a;
    }else{
        if(n == 1){
            return b;
        }else{
            return fibonacci(a, b, n-1) + fibonacci(a, b, n-2);
        }
    }
}