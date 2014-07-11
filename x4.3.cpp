#include <iostream> 

int main()
{
    /* Write code that allocates memory dynamically to two vectors of double preci-
     * sion floating point numbers of length 3, assigns values to each of the entries, and
     * then de-allocates the memory before the code terminates. Extend this code so that it
     * calculates the scalar (dot) product of these vectors and prints it to screen before the
     * memory is de-allocated. Put the allocation of memory, calculation and de-allocation
     * of memory inside a for loop that runs 1,000,000,000 times: if the memory is not
     * de-allocated properly your code will use all available resources and your computer
     * may struggle.
     * */
    
    double *A, *B;
    for (int i=0; i<3; ++i){
        A = new double *A[3];
        B = new double *B[3];

        A[0] = 1.2; A[1] = 2.2; A[2] = 0.99;
        std::cout << A[0] << "\t" << A[1] << "\t" << A[2] << std::endl;
    }

    return 0;
}
