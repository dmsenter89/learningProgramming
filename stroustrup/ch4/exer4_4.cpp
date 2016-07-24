/*
 * Author: Michael Senter
 * Date: 2015/06/06
 * Stroustrup, Exer. 4.3:
 * Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and the if-else construct.
 */

#include "../std_lib_facilities.h"

double new_guess(double lower_bd, double upper_bd)
{
    return (lower_bd+upper_bd)/2;
}

void computer_guess()
// currently this function can't figure out when the user wants 50
{
    int low{1}, high{100};
    int guess{0},last_guess{-1};
    char ans='n';

    while(high>low){
        guess=new_guess(low,high);
        cout << "The computer guesses " << guess << ". Is your number less than that? ";
        cin >> ans;
        if (ans=='y'){
            high = guess-1;
        } else if (ans=='n'){
            low = guess;
        }
        if (last_guess==guess){
            cout << "I found your number! It's " << guess<< std::endl;
            break;
        }
        last_guess=guess;
    }

}


int main()
{
    char ans='n';

    while (ans!='y'){
        cout << "Think of a number between 1 and 100. Ready? ";
        cin >> ans;
        if (ans=='y') computer_guess();
    }

}
