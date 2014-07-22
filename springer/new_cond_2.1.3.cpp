// solution to 2.1.3

#include <iostream>

int main()
{
    double x=5.0, y=4.0, z;

    if ( (x>=y) || (x < 5.0 ) )
        z = 4.0;
    else // if x<y AND x >= 5.0
        z = 2.0;

    std::cout << "z = " << z << std::endl;

    return 0;
}
