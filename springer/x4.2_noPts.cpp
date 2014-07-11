#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 6, c = 0;

    c = a;
    a = b;
    b = c;

    cout << "a = " << a << "; b = " << b << endl;

    return 0;
}
