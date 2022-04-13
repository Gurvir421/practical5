#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>


class MapGeneric {
    public:
    MapGeneric();
    std::vector<int> map(std::vector<int> inputVector) ;


    protected:
    virtual int f(int in)=0;
    int input;
    std::vector<int> storage;
    std::vector<int> test;

    
};
#endif