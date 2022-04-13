#include <iostream>
#include <vector>

#include "MapGeneric.h"

using namespace std;

MapGeneric::MapGeneric() {
    
}

vector<int> MapGeneric::map(vector<int> inputVector) {
    
    int size=inputVector.size();
    
    if (size==0) {
        return test;
    }
    
    int value=inputVector.at(0);
    
    storage.push_back(f(value));

    inputVector.erase(inputVector.begin());
    
    map(inputVector);
    
    return storage;
}

