#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
    string words;
    string allWords;

    while(cin >> words){
        allWords += words;
        allWords += "\t";
    }

    cout << allWords << endl;

    return 0;
}
