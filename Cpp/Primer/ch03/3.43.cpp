/*
 * Write three different versions of a program to print the elements of ia.
 * One version should use a range for to manage the iteration, the other two should use
 * an ordinary for loop in one case using subscripts and in the other using pointers. In
 * all three programs write all the types directly. That is, do not use a type alias, auto, or
 * decltype to simplify the code.
 */

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    // define the array ia
    int ia[3][4] = {
        {0, 1, 2, 3},       // row 1
        {4, 5, 6, 7},       // row 2
        {8, 9, 10, 11}      // row 3
    };

    cout << "Printing with range for loop:\n";

    for (const auto &row : ia){             // what's the type here?
        for (const auto &col : row){        // see above questions
            cout << col << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Printing with subscripts:\n";
    for (int i=0; i<3; ++i){
        for (int j=0; j<4; ++j){
            cout << ia[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Printing with pointers:\n";

    for (auto  ou = begin(ia); ou != ia+3; ++ou){
        for (auto in = begin(*ou); in != end(*ou); ++in){
            cout << *in << "  ";
        }
        cout << endl;
    }

    return 0;
}
