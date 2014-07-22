// Write a function Multiply that may be used to multiply two matrices given
// the matrices and the size of both matrices. Use assertions to verify that the matrices
// are of suitable sizes to be multiplied.

#include <iostream>
#include <cmath>

void  multiply(double a[][2], double b[][2], double c[][2])
{
    for (int row=0; row < 2; ++row) {
       for (int col=0; col < 2; ++col) {
          for (int inner=0; inner <2 ; ++ inner) {
             c[row][col] += a[row][inner] * b[inner][col];
          } } } 
    
}

int main()
{
    double a[2][2] = { {2.1, 3.3}, {2.2,4.0} }, b[2][2] = { {1.1, 0.0}, {4.0, 2.0} };
    double c[2][2] = { {0,0}, {0,0} };

     multiply(a, b, c);

     std::cout << c[0][0] << " " << c[0][1] << "\n"
         << c[1][0] << " " << c[1][1] << std::endl;

    return 0;
}
