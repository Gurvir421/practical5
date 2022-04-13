#include <iostream>

#include"FilterGeneric.h"
#include"FilterOdd.h"
#include <vector>

FilterOdd::FilterOdd() :FilterGeneric::FilterGeneric() {
    
}

bool FilterOdd::g(int inp) {
    if (inp%2==0) {
        return true;
    }
    else {
        return false;
    }
}