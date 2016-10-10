#include "functs.h"
#include <iostream>

using namespace std;

int main()
{
    int a=1, b=4;
    cout << "Pre-Swap: a=" << a << ", b=" << b << endl;
    swap(a,b);
    cout << "Post-Swap: a=" << a << ", b=" << b << endl;

    reset(a);
    cout << "After reset: " << a << endl;

    initializer_list<int> il1{1,2,3,5};   
    int sum=sum_list(il1);
    cout << "Sum of the ini-list: " << sum << endl;

    string s1;

    cout << "Type in a string. Function will return non-zero "
        << "if string includes a capital letter." << endl;

    //while (getline(cin, s1)){
    //    cout << "Result: " << has_capitals(s1) << endl;
    //    make_lower(s1);
    //    cout << "Make it all lower: " << s1 << endl;
    //        }


    return 0;
}
