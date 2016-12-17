#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    // initialize our variables
    vector<int> inp;
    int i;

    cout << "Enter a list of integers." << endl;
    
    // insert elements to vec from commandline
    while (cin >> i){
        inp.push_back(i);
    }

    cout << "\nThank you. You added " << inp.size() 
        << " elements to the vector." << endl;

    // print out the elements of the vector
    cout << "The elements of the vector are: " << endl;
    for (auto v : inp)
        cout << v << " ";

    cout << "\n";
    
    return 0;
}
