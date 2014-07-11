#include <iostream>

int main()
{
    int i = 5;
    int *p_j = &i;

    // alter i
    std::cout << "First i: " << i << std::endl;
    *p_j *= 5;
    // after alteration
    std::cout << "Second i: " << i << std::endl;

    int *p_k = new int;
    p_k = &i;

    std::cout << "Printing p_k: " << *p_k << std::endl;

    //delete p_k;

    return 0;
}
