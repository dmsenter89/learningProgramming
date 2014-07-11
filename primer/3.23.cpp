#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    // create a vec with ten elements
    vector<int> vec;
    for (int i=1; i<21; ++i){
        vec.push_back(i);
    }

    // double each value suing iterators
    for (auto it = vec.begin(); it != vec.end(); ++it){
        *it *= *it;
    }


    // print vector;
    cout << "Squares of the first 20 integers:" << endl;
    for (auto &it : vec)
        cout << it << " ";

    cout << endl;

    return 0;
}
