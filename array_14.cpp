// solution to 1.4

#include <iostream>

using namespace std;

int main()
{
    // declare matrix A & B
    double A[2][2] = { {1,2}, {3,4} };
    double B[2][2] = { {1,0}, {5,5} };

    // calculare matrices C and D
    double C[2][2] = { {A[0][0]+B[0][0], A[0][1]+B[0][1]}, {A[1][0]+B[1][0], A[1][1]+B[1][1]} };
    double D[2][2] = { { A[0][0]*B[0][0] + A[0][1]*B[1][0], A[0][0]*B[0][1] + A[0][1]*B[1][1] },
        { A[1][0]*B[0][0] + A[1][1]*B[1][0], A[1][0]*B[0][1] + A[1][1]*B[1][1] }};

    cout << "The are the arrrays we created:\n";
    cout << "A = [" << A[0][0] << ", " << A[0][1] << "; " << A[1][0] << ", " << A[1][1] << "]" << endl;
    cout << "B = [" << B[0][0] << ", " << B[0][1] << "; " << B[1][0] << ", " << B[1][1] << "]" << endl;
    cout << "C = [" << C[0][0] << ", " << C[0][1] << "; " << C[1][0] << ", " << C[1][1] << "]" << endl;
    cout << "D = [" << D[0][0] << ", " << D[0][1] << "; " << D[1][0] << ", " << D[1][1] << "]" << endl;


    return 0;
}
