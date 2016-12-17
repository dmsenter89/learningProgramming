#include <iostream>

int main()
{
    int sum = 0, value = 0;

    // read until EOF, calculating a running total of all read values
    while (std::cin >> value)
        sum += value;

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}
