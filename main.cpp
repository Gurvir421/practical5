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
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std;
int main () {
    
    vector<int> table {105,30};
    //MapGeneric m;
    //MapTriple m;
    //MapAbsoluteValue m;
    FilterForTwoDigitPositive m;
    
    //vector<int> hello=m.map(table);
    vector<int> hello=m.filter(table);
    
    ReduceGCD a;
    cout << a.reduce(table) <<endl;
    
    
    //for (int i=0;i<hello.size();i++) {
    //    cout <<hello.at(i)<<endl;
    //}
    
    
    return 0;
}
