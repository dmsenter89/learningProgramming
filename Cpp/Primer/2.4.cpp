#include <iostream>

using namespace std;

int main()
{
    // initial matrices/vectors
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                     { 7.0, 1.0, 2.0},
                    {0.0, 0.0, 1.0}};
    double B[3][3] = {  {-2.0, 0.0, 1.0},
                        {1.0, 0.0, 0.0},
                        {4.0, 1.0, 0.0}};

    // calculate w
    double w[3];
    for (int i=0; i<3; ++i){
        w[i] = u[i] - 3.0*v[i];
    }

    cout << "So far it's working" << endl;

    // define  x = u -v
    double x[3];
    for (int i=0; i<3; ++i){
        x[i] = u[i]-v[i];
    }

    // define y = A*u
    double y[3] = {0.0,0.0,0.0};
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            y[i] += A[i][j]*u[j];
        }}

    // define z = A*u -v
    // note that A*u has already been declared to be y
    double z[3];
    for (int i=0; i<3; ++i){
        z[i] = y[i] - v[i];
    }


    // define C = 4*A - 3*B
    double C[3][3] = { {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            C[i][j] = 4*A[i][j] - 3*B[i][j];
        }}

    // define D = A*b
    double D[3][3] = { {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            D[i][j] += A[i][j]*B[j][i];
        }}

    return 0;
}
