#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
    string in1, in2;

    // read-in two strings:
    cin >> in1 >> in2;

    if (in1 != in2){
        if (in1 > in2)
            cout << "String 1 was greater than string 2." << endl;
        else
            cout<< "String 2 was greater than string 1." << endl;
    } else {
        cout << "Both strings are equal." << endl;
    }

    return 0;
}
