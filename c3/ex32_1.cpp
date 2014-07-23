#include <string>
#include <iostream>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    string line, outp;
    while (getline(cin,line)){
        outp += line;
        outp += "\n";
    }

    cout << outp;
    return 0;
}
