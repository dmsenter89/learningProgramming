#include <iostream>

using namespace std;

int main() // note I'm not using the arguments to main in the book as they're unnecessary
{
    double p=6.0, q=7.6, x=13.0, y=20;
    int j=10;

    // solution to 2.2.1

    if ( (p>q) || (j!=10) ){
        x = 5.0;
        cout << "First if. We set x = " << x << endl;
    }
    else
        cout << "First if condition failed." << endl;

    // solution to 2.2.2
    if ( (y >= q) && (j==20) ){
        x = 5.0;
        cout << "Second if statement. Condition met." << endl;
    } else {
        x = p;
        cout << "Second if statement. Condition failed." << endl;
    } 

    // solution 2.2.3
    if (p>q){
        x = 0.0;
        cout << "Third if. First condition met." << endl;
    } else if ( (p <= q) && (j==10)){
        x = 1.0;
        cout << "Third if. Second condition met." << endl;
    } else {
        x = 2.2;
        cout << "Third if. Otherwise case." << endl;
    }

    return 0;

}
