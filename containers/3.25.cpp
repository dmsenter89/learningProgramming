/*
 * cpp primer 5th, p. 113
 * rewrite grade clustering prog. from p 104 
 * using iterators
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11,0);
    unsigned grade;

    // how to rewrite this intelligently
    // to use iterators instead of subscripting?
    while (cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];
    }

    // print the grades
    vector<unsigned> cats;
    for (auto i=0; i<=100; i+=10)
        cats.push_back(i);

    cout << "Grade clusters:\n";
    for (auto c : cats)
        cout << c << "\t";
    cout << endl;

    for (auto c: scores)
        cout << c << "\t";

    cout << endl;

    return 0;
}
