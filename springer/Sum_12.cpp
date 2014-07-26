// Exercise 1.2, p. 23

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    cout << "Please enter two integers." << endl;

    int a,b;
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b
        << " is " << a+b << "." << endl;
    return 0;
}
