#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"

#include <vector>

class FilterNonPositive: public FilterGeneric {
    public:
    FilterNonPositive();
    bool g(int inp);

};
#endif