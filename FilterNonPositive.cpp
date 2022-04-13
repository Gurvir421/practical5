#include <iostream>
#include "FilterGeneric.h"
#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive() : FilterGeneric::FilterGeneric() {
    
}

bool FilterNonPositive::g(int inp) {
    if (inp>0) {
        return true;
    }
    else {
        return false;
    }
}
