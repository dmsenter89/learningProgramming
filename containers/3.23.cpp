// cpp primer 5th, p. 110

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1;
 
    for (int i=1; i<=10; ++i){
     v1.push_back(i);
    }

    for (auto it = v1.begin(); it != v1.end();++it){
        *it *= 2;
    }

    cout << "The new members of my vectors are:\n";

    for (auto it = v1.begin(); it != v1.end();++it){
        cout << *it << endl;
    }
    

    return 0;
}
