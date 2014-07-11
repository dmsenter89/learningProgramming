#include <iostream>

int main()
{

    // declare two ints
    int a=3, b=5, j;
    std::cout << "a = " << a << "; b = " << b << std::endl;

    // exchange values using pointers
    int *pa = &a, *pb=&b, *pc=&j;

   *pc = *pa;
   *pa = *pb;
   *pb = *pc;

   std::cout << "a = " << a << "; b = " << b << std::endl;

    return 0;
}
