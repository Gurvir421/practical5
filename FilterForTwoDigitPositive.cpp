#include <iostream>

#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive() : FilterGeneric::FilterGeneric() {
    
}

bool FilterForTwoDigitPositive::g(int inp) {
    if (inp < 100 && inp >9) {
        return true;
    }
    else {
        return false;
    }
}

