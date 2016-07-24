#include <iostream>
#include "std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;
    // the following two initializers were taken from an
    // online source since there was a print error in
    // the book.
    Token(char ch)                  // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

int main()
{
    cout << "Please enter expression: ";
    int lval = 0;
    int rval;

    cin >> lval;
    if(!cin) error("no first operand.");

    for(char op; cin>>op; ){
        if(op!='x') cin>>rval;
        if(!cin) error("no second operand.");

        switch(op){
        case '+':
            lval += rval;
            break;
        case '-':
            lval -= rval;
            break;
        case '*':
            lval *= rval;
            break;
        case '/':
            lval /= rval;
            break;
        default:
            cout << "Result:" << lval <<'\n';
            return 0;
        }

    }

    error("bad expression.");
}

