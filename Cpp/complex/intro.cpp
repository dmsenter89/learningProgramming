#include <iostream>
#include <ccomplex>
#include "complexx.h"

using namespace std;

int main()
{ 
    C x(3,4);
    C z(2,7);
    C i(0,1);

    cout << "First: " << x << endl;
    cout << "Second: " << z << endl;
    cout << "Calculation: " << 5.-4.*i+x << endl;

    return 0;
}
