
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;            

int main()
{
 

    double n,r,pi=3.14, slice;
    cout << " Enter the numbah " << endl;
    cin >> slice;
    r = slice / 2;
    n = (pi * r * r) / 14.125;
    cout << endl;  
    cout << n << endl;

    return 0;
}


