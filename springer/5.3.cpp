#include <iostream>

void swapf(double *p, double *q)
{
    // create hilfs-variable
    double j = *p;

    // actual switch
    *p = *q;
    *q = j;
}

int main()
{
    // note the problem with this code: y cannot consist of more digits
    // than x, otherwise the y value will get truncated during the switch
    // not sure how to fix that
    double x=11.945, y=143.534;

    std::cout << "First; x=" << x << " , y="<< y << std::endl;
    swapf(&x, &y);
    std::cout << "Second; x=" << x << " , y="<< y << std::endl;

    return 0;
}
