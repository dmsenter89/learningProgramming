/*
 * Short test file to figure out how to get the cwd
 * in a good cross-platform way. Probably use boost?
 *
 * Boost filesystem requires proper linking. Use:
 * `g++ -std=c++11 getcwd.cpp -lboost_system -lboost_filesystem`
 */

#include <boost/filesystem.hpp>
#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << boost::filesystem::current_path() << std::endl;
    return 0;
}
