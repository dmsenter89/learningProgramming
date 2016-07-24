/*
 * Date: June 11, 2015
 * Author: Michael Senter
 * Problem 4.9, Stroustrup
 * The chess board problem, shows demonstrates overflow.
 */

#include "../std_lib_facilities.h"
#include <locale>

int main()
{
    int curr{1},total{1}, ctr{1};
    double weight_single{0.025}; //assuming mass of 25mg/rice grain, wiki
    double weight_total{0.025};

    cout << "The chess board problem.\n";
    cout <<"|-------------------------------------------------------------------------------|\n";
    cout <<"| Square\t| This Square\t| Total\t\t|  Weight\t\t\t|\n";
    cout <<"|-------------------------------------------------------------------------------|\n";

    while (ctr<65){
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

    cout <<"\nAs is evident, this can't be solved with regular ints." << std::endl;
        
    return 0;
}
