// Exercise 1.5, p. 23

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f_name, l_name;
    cout << "Please enter your first name. ";
    cin >> f_name;
    cout << "Please enter your last name. ";
    cin >> l_name;

    cout << "Hi " << f_name << " " << l_name << "." << endl;

    return 0;
}
