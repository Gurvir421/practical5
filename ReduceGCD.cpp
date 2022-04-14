#include <iostream>

#include "ReduceGeneric.h"
#include "ReduceGCD.h"

ReduceGCD::ReduceGCD() : ReduceGeneric::ReduceGeneric() {
    
}

int ReduceGCD::binaryOperator(int a, int b) {
    if (b==0) {
        return a;
    }
    else if (a==0) {
        return b;
    }
    else {
        return binaryOperator(b,a%b);
    }
}



