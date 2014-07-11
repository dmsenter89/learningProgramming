#include <iostream>
#include <cmath>

// Write a function that can be used to calculate the mean and standard deviation of
// an array of double precision floating point numbers.

double mean(double x[])
{
    double sum=0.0;

    for (int i; i<6; ++i)
        sum += x[i];

    double m;
    m = sum/6;
    return m;
}


double stddev(double x[], double m)
{
    double sigma, psum=0.0;

    for (int i=0; i<6; ++i){
        psum += pow(x[i]-m, 2);
    }


    sigma = sqrt(psum/(6-1));
    return sigma;

}

int main()
{
    // set up an array
    double a[6] = {3.3, 2.2, 1.1, 4.4, 5.5, 7.5};
    double m, s;

    m = mean(a);
    s = stddev(a,m);

    std::cout << "The mean is " << m << ".\n" << "The standard deviation is "
        << s << "." << std::endl;

    return 0;
}
