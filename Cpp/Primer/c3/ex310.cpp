#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    cout << "Please enter a string with punctuation." << endl;
    // get input from user:
    string line;
    getline(cin, line);
    char d = '\0';

    // now we replace each punctuation mark with nothing:
    for (auto &c : line)
        if (ispunct(c))
            c = d;

    cout << "Your new string is:\n" << line << endl;

    return 0;
}
