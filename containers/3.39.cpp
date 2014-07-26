/*
 * cpp primer 5ed, p. 124
 * compare two strings, then two c-style strings
 */

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    // library style
    string s1 = "My first string.", s2 = "My first string.";

    cout << "Comparing library strings.\n";

    if (s1==s2){
        cout << "The two strings are identical.\n";
    } else {
        cout << "The two strings differ.\n";
    }

    cout << "Comparing C-Style strings.\n";

    char ca1[] = "A string example", ca2[] = "A sring example";

    if ( strcmp(ca1,ca2) == 0){
        cout << "The C Strings are identical.\n";
    } else {
        cout << "The C strings have a difference.\n";
    }

    return 0;
}
