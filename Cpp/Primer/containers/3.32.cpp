/* 
 * cpp primer 5th, p. 117
 */

#include <iostream>
#include <array>


using namespace std;

int main()
{
    // option one, using the std::array header
    array<int,10> ar1 = {0,1,2,3,4,5,6,7,8,9};
    auto ar2 = ar1;

    for (auto c : ar2)
    {
        cout << c << "  ";
    }

    cout << endl << "And now method 2:\n";

    // method 2, using iterators;a
    int ar3[] = {0,1,2,3,4,5,6,7,8,9};
    int ar4[10];

    for (auto i = 0; i<10; ++i){
        ar4[i] = ar3[i];
    }

    for (auto ptr : ar4)
        cout << ptr << "  ";

    cout << endl;

    return 0;
}
