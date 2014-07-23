#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    cout << "Please enter a string." << endl;
    
    // get user input
    string line, tots;
    while (getline(cin, line)){
        tots += line + " ";
    }

    char s = 'X';


    // change characters
    for (auto &c : tots)
        if (isalpha(c))
            c = s;
        
    // give back the new string
    cout << "The new string is:\n" 
        << tots << endl;

    return 0;
}
