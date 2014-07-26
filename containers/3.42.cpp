/*
 * copy a vector of ints into an array
 */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4};
    auto sz = v.size();

    int ar[sz];
    for (int i=0; i<sz; ++i){
        ar[i] = v[i];
    }

    cout << "Done copying the arrays. Printing.\n";
    for (auto c : ar){
        cout << c << "  ";
    }

    cout << endl;
    return 0;
}
