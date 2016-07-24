#include "../std_lib_facilities.h"

int main()
{
    double val1=0, val2=0;

    while (cin >> val1 >> val2){
        
        if (val1 == val2){
            std::cout << "The values are euqal.\n";
        } else if (abs(val1-val2)<0.01){
            std::cout << "The values are almost equal.\n";
        } else if (val1<val2){
            std::cout << "The smaller value is: " << val1
                << ", the larger value is: " << val2 << std::endl;
        } else if (val2 < val1) {
            std::cout << "The smaller value is: " << val2
                << ", the larger value is: " << val1 << std::endl;
        }
    }

    return 0;
}
