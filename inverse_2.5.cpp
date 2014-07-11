#include <iostream>
#include <cassert>
#include <cmath>

int main()
{
    // we define the matrix A
    double A[2][2] = { {4, 10}, {1,1} };
    // we calculate the determinant
    double detA = (A[0][0]*A[1][1]-A[0][1]*A[1][0]);

    // assert that det is non-zero
    assert (detA != 0);

    // the inverse of A is given by
    // 1/(ad-bc) * { {d, -b}, {-c, a} }

    // initialize
    double Ainv[2][2] = { {A[1][1], -A[0][1]}, {-A[1][0], A[0][0]} };
    // adjust
    for (int i=0; i<2; ++i){
        for (int j=0; j<2; ++j){
            Ainv[i][j] *= 1/detA;
        }}


    return 0;
}
