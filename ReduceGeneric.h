#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {
    public:
    ReduceGeneric();
    int reduce(std::vector<int> inputVector);
    
    
    protected:
    virtual int binaryOperator(int a, int b)=0;
    int storage;
    int check=0;
};

#endif