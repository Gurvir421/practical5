#include <iostream>

#include "FilterGeneric.h"
#include <vector>

using namespace std;

FilterGeneric::FilterGeneric() {
    
}

vector<int> FilterGeneric::filter(vector<int> inputVector) {
     
    int size=inputVector.size();
    
    if (size==0) {
        return test;
    }
    
    int value=inputVector.at(0);
    
    if (g(value)==true) {
        storage.push_back(value);
    }

    inputVector.erase(inputVector.begin());
    
    filter(inputVector);
    
    return storage;
}

