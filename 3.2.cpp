#include <iostream>
#include <fstream>

int main()
{
    std::ifstream readf("x_and_y.dat");
    if ( !readf.is_open() )
        return 1;
    
    int number_of_rows = 0;
    double dummy1, dummy2, dummy3, dummy4;
    std::cout << "Values: " << std::endl;

    while ( !readf.eof() ){
        readf >> dummy1 >> dummy2 >> dummy3 >> dummy4;
        std::cout << dummy1 << "\t" << dummy2 << "\t" 
            << dummy3 << "\t" << dummy4 << std::endl;
        ++number_of_rows;
    }

    std::cout << "Number of rows = " << number_of_rows << "\n";
    std::cout << readf.fail() << std::endl;

    readf.close();

    return 0;
}
