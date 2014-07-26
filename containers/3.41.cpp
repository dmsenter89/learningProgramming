/*
 * initialize a vector from an array of ints
 */

#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int ar[] = {1,2,3,4};
    vector<int> v1(begin(ar), end(ar));

    for (auto c : v1){
        cout << c << "  ";
    }

    cout << endl;
    return 0;
    }
