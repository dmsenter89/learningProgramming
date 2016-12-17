#include "std_lib_facilities.h"

int main()
{
    double miles{0};
    std::cout << "Convert miles to kilometers.\n"
        << "Number of miles: ";
    std::cin >> miles;

    std::cout << "That equals " << miles*1.609
        << " km.\n";

    return 0;
}
