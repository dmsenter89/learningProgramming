// warm up exercise to 1.4

#include <iostream>

using namespace std;

int main()
{

    // invite user to give us positon A and B of the 2x2 matrix

    cout << "Please enter two real numbers." << endl;
    double a = 0, b=0;
    cin >> a >> b;
    cout << "Thank you for your cooperation." << endl;

    // calculate entries c and d from input 
    double c = a + b, d = a*b;

    // print array
    cout << "The array you entered is:\n" 
        << "[" << a << ", " << b << "; " << c << ", " << d << "]" << endl;

    return 0;
}
