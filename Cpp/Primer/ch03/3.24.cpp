/*
 * cpp primer 5th, p.113
 * read a set of ints -> vec; print sum of each pair
 * of adjacent elements; 
 * then print the sum of the first and last, etc. 
 * use iterators
 */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> tab;
    
    for (auto i=1; i <= 20; ++i){
        tab.push_back(i);
    }

    cout << "Created vector with 1 <= x <= 20, for x in Z." << endl;

    auto beg = tab.begin(), end = tab.end();

    cout << "Adding each element to it's successor:\n";
    while ( (beg+1) != end){
        cout << *beg + *(beg+1) << "   ";
        ++beg;
    }

    cout << "\nadding first and last, closing loop:\n";
    
    // reset beginning
    beg = tab.begin();
    // set end to refer to the last element
    end -= 1;

    while ( beg < end){
        cout << *beg + *end<< "   ";
        ++beg;
        --end;
    }

    
    cout << endl;
    return 0;
}
