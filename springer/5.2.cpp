#include <iostream>

void change(int *x)
{
    *x += 4;
}

int main()
{
    int t = 96;
    std::cout << "First value of t: " << t << std::endl;
    
    change(&t);
    std::cout << "New value of t: " << t << std::endl;
    return 0;
}
