// Solution to exercise 1.3, p. 23

#include <iostream>
#include <cmath>

int main()
{
    // Declare the two vectors
    double v1[1][3] = {1,1,0};
    double v2[1][3] = {2,2,2};

    // calculate the scalar product: 
    double scale;
    scale = v1[0][0] * v2[0][0] + v1[0][1] * v2[0][1] + v1[0][2] * v2[0][2];

    // print scalar product to screen
    std::cout << "The scalar product of our vectors is: " << scale << std::endl;


    // calculate the euclidian norm of the vectors
    double norm1, norm2;
    norm1 = sqrt( pow(v1[0][0],2) + pow(v1[0][1],2) + pow(v1[0][2],2) );
    norm2 = sqrt( pow(v2[0][0],2) + pow(v2[0][1],2) + pow(v2[0][2],2) );

    // printh the norms
    std::cout << "The norm of v1 is " << norm1 << "." << std::endl;
    std::cout << "The norm of v2 is " << norm2 << "." << std::endl;

    return 0;
}
