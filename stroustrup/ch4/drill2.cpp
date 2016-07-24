#include "../std_lib_facilities.h"


double convert_to_cm( double val, string unit)
{
    if (unit=="m"){
        val*=100;
    } else if (unit=="in"){
        val*=2.54;
    } else if (unit=="ft"){
        val*=12*2.54;
    }

    return val;
}


int main()
{
    vector<double> vals, all_vals;
    double temp;
    string unit;
    
    while(cin>>temp>>unit){
        if (vals.size()<2){
            temp = convert_to_cm(temp, unit);
            vals.push_back(temp);
            all_vals.push_back(temp);
            cout << "New value: " << temp << "cm\n";
            sort(vals);
        } else {
            temp = convert_to_cm(temp, unit);
            cout << temp << "cm";
            if (temp<vals[0]){
                cout << ", the smallest so far.";
                vals[0] = temp;
            } else if (temp>vals[1]){
                cout << ", the largest so far.";
                vals[1] = temp;
            }
            cout << "\n";
            all_vals.push_back(temp);
        }
    }

    double sum=0;
    for (double x : all_vals){
        sum += x;
    }

    cout << "\nIn total you entered " << all_vals.size() << " values."
        << " They sum to " << sum/100 << "m.\n";

    return 0;
}
