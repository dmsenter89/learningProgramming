/*
 * Date: June 8, 2015
 * Author: Michael Senter
 * Solution to exercise 4.5 from Stroustrup
 * Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more sophisticated simple calculator.
 */

#include "../std_lib_facilities.h"


int main()
{
    double a,b;
    char nrepeat, operation;
    while(nrepeat!='y'){
        cout << "Please enter a calculation: ";
        cin >> a >> operation >> b;
        switch(operation){
            case '+':
                cout << "Result: " << a+b << std::endl;
                break;
            case '-':
                cout << "Result: " << a-b << std::endl;
                break;
            case '*':
                cout << "Result: " << a*b << std::endl;
                break;
            case '/':
                cout << "Result: " << a/b << std::endl;
                break;
            default:
                break;
        }

        cout << "Do you want to stop? ";
        cin >> nrepeat;
        if (nrepeat=='y') break;
    }  

    return 0;
}
