#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapSquare.h"
using namespace std;

MapSquare::MapSquare() : MapGeneric::MapGeneric(){
    
}

int MapSquare::f(int in) {
    return in*in;
}