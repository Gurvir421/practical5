#include <iostream>
#include "ReduceGeneric.h"

using namespace std;
ReduceGeneric::ReduceGeneric() {
    
}

int ReduceGeneric::reduce(vector<int> inputVector) {
    
    int size=inputVector.size();
    
    if (size==0) {
        return 0;
    }
    if (check==0) {
        storage=inputVector.at(0);
        inputVector.erase(inputVector.begin());
        check=1;
    }
    
    int value=inputVector.at(0);

    storage=binaryOperator(storage,value);

    inputVector.erase(inputVector.begin());
    
    reduce(inputVector);
    
    return storage;
}



