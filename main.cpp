#include <iostream>
#include <vector>
#include <array>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
using namespace std;
int main () {
    
    vector<int> table {10,2,3,4};
    //MapGeneric m;
    //MapTriple m;
    //MapAbsoluteValue m;
    FilterForTwoDigitPositive m;
    
    //vector<int> hello=m.map(table);
    vector<int> hello=m.filter(table);
    
    for (int i=0;i<hello.size();i++) {
        cout <<hello.at(i)<<endl;
    }
    
    
    return 0;
}
