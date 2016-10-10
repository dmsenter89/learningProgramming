#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // setting up the x values
    double x_prev=1.0, x_next=1.0;
    double eps = 1.e-6;

    for (int i; i<100; ++i){
        x_prev = x_next;
        x_next = x_prev - (exp(x_prev) + pow(x_prev,3) - 5.0)/(exp(x_prev)+3*pow(x_prev,2));
        cout << "Iteration: " << i+1 << "\t Value: " << x_next << endl;
        
        if (fabs(x_next-x_prev)<= eps){
            cout << "Success. The error is within " << eps << "." << endl;
            break;
        }
    }

    return 0;
}
