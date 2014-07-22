/* Simple Tree
 * 
 * Calculates the price of an option for a three period time frame
 * given volatility, rate of return/interest rate, initial price of
 * the stock and strike price.
 *
 * ===========================
 *
 * Step 1: Get variable values from user, CLI
 * Step 2: Compute an up and down depending on stock price
 *          (something like S_u = exp(interest \pm volatility) )
 * Step 3: Build a tree structure
 *          -> Vector of vectors, upper triangular matrix 
 * Step 4: 
 *
 */

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;



double americanPut(double T, double S, double K, double r,
        double sigma, double q, double n)
{
    auto deltaT = T/n;
    auto up = exp(sigma*sqrt(deltaT)); // amount stock goes up if it performs well

    // risk neutral probabilities
    auto p0 = (up * exp(-r * deltaT) - exp(-q * deltaT)) * up / (pow(up,2) - 1);
    auto p1 = exp(-r * deltaT) - p0;
    double p;

    vector<double> bTree;

    for (auto i = 0; i<n; ++i){
        p = K - S * pow(up, 2*i-n);
        if (p < 0)      // ensuring that p is pos.
            p = 0;      // since we won't exercise our option otherwise

        bTree.push_back(p);
    }

    auto exercise=0.0;
    for (auto j = n-1; j>=0; --j){
        for (auto i=0; i<j; ++i){
            bTree[i] = p0 * bTree[i] + p1 * bTree[i+1]; // binomial value
            exercise = K - S * pow(up, 2*i-j);          // exercise value
           if (bTree[i] < exercise)
                bTree[i] = exercise;
        }
    }

    return bTree[0];
}


int main()
{
    double interest, time, steps, strike, stockprice, sigma, dividend;
    cout << "\nEnter Interest: \t";
    cin >> interest;
    cout << "Enter time: \t";
    cin >> time;
    cout << "Enter number of steps: \t";
    cin >> steps;
    cout << "Enter initial price: \t";
    cin >> stockprice;
    cout << "Enter strike price: \t";
    cin >> strike;
    cout << "Enter continuous dividend: \t";
    cin >> dividend;
    cout << "Enter volatility: \t";
    cin >> sigma;
    cout << "\nOption value is " << americanPut(time, stockprice, strike, interest, sigma, dividend, steps) << "\n";
    return 0;
}

