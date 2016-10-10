#include <iostream>

int main()
{
    int **A;
    A = new int *[1000];
    std::cout << "Print A: " << A << std::endl;
    std::cout << "Print *A: " << *A << std::endl;

    for (int i=0; i<1000; ++i)
        A[i] = new int[i+1];

    std::cout << "After the for loop." << std::endl;
    std::cout << "Print A: " << A << std::endl;
    std::cout << "Print *A: " << *A << std::endl;

    return 0;
}
