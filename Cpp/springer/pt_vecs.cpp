#include <iostream>

int main()
{
    double *x, *y;
    x = new double [10];
    y = new double [10];

    for (int i=0; i<10; ++i){
        x[i] = ( (double) (i) );
        y[i] = 2.0 *x[i];
    }


    std::cout << "Print x: " << std::endl;
    for (int i=0; i<10; ++i)
        std::cout << x[i] << "\t";

    std::cout << std::endl << "Print y: " << std::endl;
    for (int i=0; i<10; ++i)
        std::cout << y[i] << "\t";

    std::cout << std::endl;

    delete[] x;
    delete[] y;

    return 0;
}
