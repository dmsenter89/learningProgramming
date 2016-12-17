#include "../std_lib_facilities.h"

int square(int x)
{
    int i=0, sol=0;
    while(i<x){
        sol+=x;
        ++i;
    }

    return sol;
}

int main()
{
    int i=0;

    while(i<100){
        std::cout << i << "\t" << square(i) << std::endl;
        ++i;
    }

    return 0;
}
