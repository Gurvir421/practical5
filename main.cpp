#include <iostream>
#include <vector>
#include <array>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"

using namespace std;
int main () {
    
    vector<int> table {1,2,3,4};
    
    //MapGeneric m;
    //MapTriple m;
    //MapAbsoluteValue m;
    FilterOdd m;
    
    //vector<int> hello=m.map(table);
    vector<int> hello=m.filter(table);
    
    for (int i=0;i<hello.size();i++) {
        cout <<hello.at(i)<<endl;
    }
    
    return 0;
}