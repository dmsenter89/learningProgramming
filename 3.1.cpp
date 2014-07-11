#include <iostream>
#include <fstream>
#include <cassert>

int main()
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    // create file stream
    std::ofstream write_file("x_and_y.dat");
    assert(write_file.is_open());

    // set output formats
    write_file.setf(std::ios::scientific);
    write_file.setf(std::ios::showpos);
    write_file.precision(10);

    // write x on one line, then write y on the other
    for (int i=0; i<4; ++i)
        write_file << x[i] << "\t";

    write_file << std::endl;

    for (int i=0; i<4; ++i)
        write_file << y[i] << "\t";


    // exit everything cleanly
    write_file.close();
    return 0;
}
