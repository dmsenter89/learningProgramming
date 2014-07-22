// solution to exercise 1.6, p. 23

#include <iostream>

using namespace std;

int main()
{
    int cars, temp;
    double average;
    cout << "Please enter the average number of cars passing by each day for five days separated by a space." << endl;

    while ( cin >> temp )
       cars += temp;

    // calculare the average
    average = double(cars)/5;

    cout << "The average number of cars per day was " << average << endl;

    return 0;
}
