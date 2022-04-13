#ifndef FILTERODD
#define FILTERODD

#include "FilterGeneric.h"
#include <vector>

class FilterOdd : public FilterGeneric {
    public:
    FilterOdd();
    bool g(int inp);

};
#endif