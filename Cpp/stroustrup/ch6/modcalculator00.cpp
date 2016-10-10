//
// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

#include "../std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token {
public:
    char kind;        // what kind of tokenestar
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }    
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

class Token_stream {
    public:
        // user interface
        Token_stream();
        Token get();
        void putback(Token t);
    private:
        // implementation details
        bool full {false};
        Token buffer;
};

void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;
    full = true;
}

Token Token_stream::get()
{
    if (full){
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;  // note that >> skips whitespace
    switch(ch){
        case ';': //print
        case 'q': // quit
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token{ch};
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);
            double val;
            cin >> val;
            return Token{'8',val};
        }
        default:
            error("Bad token");
        }
}

Token_stream ts;

//------------------------------------------------------------------------------

Token get_token()    // read a token from cin
{
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
 //not yet   case ';':    // for "print"
 //not yet   case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': 
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {    
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
    //Token t = get_token();
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {    
            double d = expression();
            t = get_token();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
    }
}
//------------------------------------------------------------------------------

int main()
try {
    double val = 0;
    while (cin)
        Token t = ts.get();
        if (t.kind=='q') break;
        if (t.kind==';')
             cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    keep_window_open("~0");
}
catch (exception& e) {
    cerr << e.what() << endl;
    keep_window_open ("~1");
    return 1;
}
catch (...) {
    cerr << "exception \n";
    keep_window_open ("~2");
    return 2;
}

//------------------------------------------------------------------------------

double expression()
{
    double left = term();      // read and evaluate a Term
    //Token t = get_token();     // get the next token
    Token t = ts.get();
    while(true) {    
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            //t = get_token();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            //t = get_token();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

double term()
{
    double left = primary();
    //Token t = get_token();     // get the next token
    Token t = ts.get();

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            //t = get_token();
            t = ts.get();
            break;
        case '/':
            {    
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d; 
                //t = get_token();
                t = ts.get();
                break;
            }
        default:
            ts.putback(t);
            return left;
        }
    }
}

//------------------------------------------------------------------------------
