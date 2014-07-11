#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
    // declare two random matrices
    mat A = randn<mat>(5,5);
    mat B = {16, 4, 4, -4, 4, 10, 4, 2, 4, 4, 6, -2, -4, 2, -2, 4};
    B.reshape(4,4);

    vec eigval = eig_sym( A );

    cout << "Eigenvalue?: \n" << eigval << std::endl; 

    // create the cholesky
    mat C = chol(A);
    
    cout << "A random matrix A:\n" << A << endl;

    cout << "A Cholesky of B is:\n" << C << endl;

    return 0;
}
