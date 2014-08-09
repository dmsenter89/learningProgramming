/*
 * cpp primer 5ed, p. 144
 */

#include <iostream>

using namespace std;

int main()
{
    int temp, sum = 0;

    while (cin >> temp){
        sum += temp;
        if (sum >= 42){
            return 0;
        }
    }

    return 0;
}
