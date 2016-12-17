#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;

int main()
{
    // initialize variables
    vector<string> inp;
    string word;

    cout << "Please enter some words." << endl;
    
    // read  a sequence of words from cin
    while ( cin >> word)
        inp.push_back(word);

    // process the vector: change all input to uppercase
    for (auto &r : inp){
        for (auto &l : r){
            l =  toupper(l);
    }}


    // print out vector; eight words to the line 
    cout << "\nThe following words were entered:" << endl;

    int ct = 0;
    for (auto i : inp){
        cout << i << " ";
        ++ct;
        if (ct = 8){
            cout << endl;
            ct = 0;
        }
    }

    cout << endl;

    return 0;
}
