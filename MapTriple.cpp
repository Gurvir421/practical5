#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
using namespace std;

MapTriple::MapTriple() : MapGeneric::MapGeneric(){
    
}

int MapTriple::f(int in) {
    return 3*in;
}

