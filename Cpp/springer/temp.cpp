#include <iostream>
#include <cmath>

void CalculateCubeRoot(double& x, double K,
        double tolerance = 1.0e-6,
        int maxIterations = 100);

int main(int argc, char * argv[])
{
    double x = 1.0;
    double K = 12.0;

    // Calculate cube root using default values
    CalculateCubeRoot(x, K);
    std::cout << "First run: " << x << std::endl;
    x = 1.0;
    
    double tolerance = 0.8;
    CalculateCubeRoot(x, K, tolerance);

    std::cout << "Second run: " << x << std::endl;

    x = 1.0;
    int maxIterations = 50;
    CalculateCubeRoot(x, K, tolerance, maxIterations);
    std::cout << "Third run: " << x << std::endl;

    return 0;
}

void CalculateCubeRoot(double& x, double K,
        double tolerance, int maxIterations)
{
    int iterations = 0;
    double residual = x*x*x-K;
    while ((fabs(residual) > tolerance) &&
            (iterations < maxIterations))
    {
        x = x-(x*x*x-K)/(3.0*x*x);
        residual = x*x*x-K;
        iterations++;
    }
}
