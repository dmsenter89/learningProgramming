/*
 * Cpp primer 5ed, p. 121
 */

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    // set an array of ints
    int ar[] = {1,2,3,4,5,6,7,8,9,10};
    
    // set up the pointers
    int *pbeg = begin(ar); 
    int *pend = end(ar);

    while (pbeg!= pend && pbeg>=0){
        *pbeg = 0;
        ++pbeg;
    }

    for (auto c : ar){
        cout << c << "   ";
    }

    cout << endl;

    return 0;
}
