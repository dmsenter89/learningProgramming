#include "functs.h"
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;

/// Solution to Exercise 6.10
void swap(int *a, int *b)
{
    int c = *a, d = *b;
    *a = d;
    *b = c;
}


// compare length of two strings
bool isShorter (const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}


/// Solution to 6.11
void reset (int &j)
{
    j=0;
}

/// solution to 6.17a, p215
int has_capitals(const string &s)
{
    bool truth = false;

    for (auto c : s){
        if (isupper(c)){
            truth = true;
        }
    }

    return truth;
}

/// solution to 6.17, b
void make_lower(string &s)
{
    for (auto &c: s){
        c=tolower(c);
    }
}

/// solution to 6.27
int sum_list(initializer_list<int> il)
{
    int sum=0;
    for (auto c: il){
        sum += c;
    }

    return sum;
}


