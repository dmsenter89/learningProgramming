/*
 * cpp primer 5ed, p. 152
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5};

    for (auto c : v1){
        ((c%2)!=0) ?c *=2 : c=c ;
        cout << c << " ";
    }

    cout << endl;

    return 0;
}

