#include <iostream>
#include <vector>
#include <stdlib.h>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"


MapAbsoluteValue::MapAbsoluteValue() :MapGeneric::MapGeneric() {
    
}


int MapAbsoluteValue::f(int in) {
    return abs(in);
}
