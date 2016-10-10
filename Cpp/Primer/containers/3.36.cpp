/*
 * Cpp primer 5ed, p. 121
 * compare two arrays and/or two vecs for equality
 * I'll define them as equal if all of their elements are equal
 */

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int ar1[] = {1,2,3,4}, ar2[]={1,2,3,4};

    // set up the various pointers
    auto pbeg1(ar1), pbeg2(ar2);
    int *pend1 = end(ar1), *pend2 = end(ar2);
    
    // loop through them both, checking each element for equality
    while (pbeg1 != pend1 && pbeg1 >=0 && pbeg2 >=0){
        if (*pbeg1 != *pbeg2){
            cout << "The two arrays are not equal.\n";
            break;
        } else {
            ++pbeg1;
            ++pbeg2;
        }
    }


    // repeating the game for vectors
    vector<int> v1 = {1,2,3,4}, v2 = {1,2,2,4};
    auto pbv1 = v1.begin(), pbv2 = v2.begin();
    auto pev1 = v1.end(), pev2 = v2.end();

    while (pbv1 < pev1){
        if (*pbv1 != *pbv2){
            cout << "The two vectors are unequal.\n";
            break;
        } else {
            ++pbv1;
            ++pbv2;
        }
    }



    return 0;
}
