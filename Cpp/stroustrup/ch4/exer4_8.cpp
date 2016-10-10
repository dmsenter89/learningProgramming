/*
 * Date: June 11, 2015
 * Author: Michael Senter
 * Problem 4.8, Stroustrup
 * How many squares are needed of 1,000 rice, 10,000 rice etc.
 */

#include "../std_lib_facilities.h"
#include <locale>

int main()
{
    int curr{1},total{1}, ctr{1};
    double weight_single{0.025}; //assuming mass of 25mg/rice grain, wiki
    double weight_total{0.025};

    cout << "How many squares of the chess board does it take to get various "
        << "amounts of rice?\n";
    cout <<"|-------------------------------------------------------------------------------|\n";
    cout <<"| Square\t| This Square\t| Total\t\t|  Weight\t\t\t|\n";
    cout <<"|-------------------------------------------------------------------------------|\n";

    while (total<1e6){
        cout.imbue(std::locale(""));   // cool new function I discovered; prints numbers nicely
        cout << "| " << ctr << "\t\t|\t" << curr << "\t|\t" << total
            << "\t|\t" << weight_total << "g / " 
            << weight_total/1000 << "kg\t|" << std::endl;
        ++ctr;
        curr*=2;
        total+=curr;
        weight_total += curr*weight_single;
    }
    cout <<"|-------------------------------------------------------------------------------|\n";
        
    return 0;
}
