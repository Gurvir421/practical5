#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include<vector>
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
    public:
    FilterForTwoDigitPositive();
    bool g(int inp);
};
#endif