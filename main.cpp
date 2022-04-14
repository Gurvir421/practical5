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
    
    vector<int> table {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    //MapGeneric m;
    //MapTriple m;
    MapAbsoluteValue m;
    MapTriple n;
    
    vector<int> hello=m.map(table);
    vector<int> hello2=n.map(hello);
    //vector<int> hello=m.filter(table);
    
    ReduceMinimum a;
    ReduceGCD b;
    cout << a.reduce(hello2) << " " << b.reduce(hello2) <<endl;
    
    
    //for (int i=0;i<hello.size();i++) {
    //    cout <<hello2.at(i)<<endl;
    //}
    
    
    return 0;
}
