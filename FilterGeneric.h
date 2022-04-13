#ifndef FILTERGENERIC
#define FILTERGENERIC
#include <vector>

class FilterGeneric {
    public:
    FilterGeneric();
    
    std::vector<int> filter(std::vector<int> inputVector);
    
    
    protected:
    virtual bool g(int inp)=0;
    std::vector<int> storage;
    std::vector<int> test;
};
#endif 