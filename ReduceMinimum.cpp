#include <iostream>

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum() :ReduceGeneric::ReduceGeneric() {
    
}

int ReduceMinimum::binaryOperator(int a, int b) {
    if (a<=b) {
        return a;
    }
    else {
        return b;
    }
}
