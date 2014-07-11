/*
 * print the size and contents of a vectors from ex. 3.13
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v3(10,42);
    vector<int> v5{10,42};
    vector<string> v7{10,"hi"};

    if (!v3.empty()){
        cout << "Vector v3 has size " << v3.size() << endl;
        cout << "Contents of vector v3:\n";

        for (auto a = v3.begin(); a != v3.end(); ++a){
            cout << *a << endl;
        }
        cout << "===============================\n";
    }


    if (!v5.empty()){
        cout << "Vector v5 has size " << v5.size() << endl;
        cout << "Contents of vector v5:\n";

        for (auto a=v5.begin(); a != v5.end(); ++a){
            cout << *a << endl;
        }
        cout << "===============================\n";
    }

    if (!v7.empty()){
        cout << "Vector v7 has size " << v7.size() << endl;
        cout << "Contents of vector v5:\n";

        for (auto a=v7.begin(); a != v7.end(); ++a){
            cout << *a << endl;
        }
        cout << "=============================\n";
    }


    return 0;
} 
