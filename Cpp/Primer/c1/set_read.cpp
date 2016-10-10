#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum;

    // read until EOF, sum everything up
    while (std::cin >> item){
        sum += item;}

    // prints the output
    std::cout << sum << std::endl;
    return 0;
}
