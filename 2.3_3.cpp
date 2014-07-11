// solution to 2.3

#include <iostream>

using namespace std;

int main()
{
    int sum=0, cur;

    while (cin >> cur){
        if ( (cur != -1) && (cur != -2) )
            sum += cur;
        else if (cur == -2)
            sum = 0;
        else
            break;

        // make sure we haven't gotten over 100
        if (sum > 100)
            break;
    }

    cout << "The sum of the numbers you have entered is: " << sum << endl;

    return 0;
}
