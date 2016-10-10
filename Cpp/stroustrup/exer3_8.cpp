#include "std_lib_facilities.h"

int main()
{
    std::cout << "Check whether a number is odd or even.\n";
    std::cout << "What number do you want to check? ";
    int num{0};
    std::cin >> num;

    if (num%2==0){
        std::cout << "The number is even.\n";
    } else if (num%2==1 || num%2==-1 ) {
        std::cout << "The number is odd.\n";
    }

    return 0;
}
