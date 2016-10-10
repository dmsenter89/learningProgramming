#include <iostream>

void print(double *y)
{
    std::cout << "The variable value is: " << *y << std::endl;
}

int main()
{
    double x = 5.0;

    print(&x);

    return 0;
}

