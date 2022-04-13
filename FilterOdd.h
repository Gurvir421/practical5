#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"
#include <vector>

class FilterOdd : public FilterGeneric {
    public:
    FilterOdd();
    bool g(int inp);

};
#endif