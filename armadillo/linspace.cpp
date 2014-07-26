#include <iostream>
#include <armadillo>

using namespace arma;
using namespace std;

int main()
{
    vec a = linspace<vec>(0,8,9);
    vec b = linspace<vec>(0,5,20);

    cout << "Integer one:\n" << a << "\n"
        << "Non-integer one:\n" << b << endl;

    return 0;
}
