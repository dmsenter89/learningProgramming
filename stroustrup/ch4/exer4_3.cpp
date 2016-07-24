/*
 * Author: Michael Senter
 * Date: 2015/06/06
 * Stroustrup, Exer. 4.3:
 * Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities.
 */

#include "../std_lib_facilities.h"


double largest_element(vector<double> v);
double mean_of_elements(vector<double> v);
double smallest_element(vector<double> v);
double sum_vector(vector<double> v);

int main()
{
    // get the info from the user
    cout << "Please enter a sequence of (positive) doubles: \n";
    vector<double> cities;
    double temp{0.0};
    while (cin >> temp){
        cities.push_back(temp);
    }

    // check that we have at least one value in the vector
    // then process
    if (cities.size()==0) error("You didn't enter a vector!");

    double largest = largest_element(cities);
    double mean = mean_of_elements(cities);
    double smallest = smallest_element(cities);
    double sumv = sum_vector(cities);
    cout << "The largest element was " << largest << std::endl;
    cout << "The smallest element was " << smallest
        << "\nThe sum of the elements is " << sumv 
        << ", with the mean being " << mean << std::endl;

    return 0;
}

double largest_element(vector<double> v)
{
    if (v.size()==0) error("Empty vector!");

    if (v.size()==1){
        return v[0];
    } else {
        double largest=v[0];
        for (auto i{1}; i<v.size(); ++i){
            if (v[i]>largest) largest=v[i];
        }
        return largest;
    }
}


double mean_of_elements(vector<double> v)
{
    if (v.size()==0) error("Empty vector!");

    double mean{0.0};
    for (auto elem:v){
        mean+=elem;
    }

    mean/=v.size();
    return mean;
}


double smallest_element(vector<double> v)
{
    if (v.size()==0) error("Empty vector!");

    if (v.size()==1){
        return v[0];
    } else {
        double smallest=v[0];
        for (auto i{1};i<v.size();++i){
            if (v[i]<smallest) smallest=v[i];
        }
        return smallest;
    }
}


double sum_vector(vector<double> v)
{
    if (v.size()==0) error("Empty vector!");

    double sum{0.0};
    for (auto x:v){
        sum+=x;
    }

    return sum;
}
