#include <iostream>
#include <string>
#include <vector>
#include <set>

#include <boost/algorithm/string.hpp>

int main()
{
    std::string example = "10 20 30 40 50,60";
    std::vector<std::string> res;
    std::cout << "Loaded string '" << example
              << "'. We will split this string." << std::endl;

    // note the odd syntax here; there is probably a better way of handling this
    // than I'm using here; the first comma represents the comma as a split
    // command, the second comma allows us to specify additional
    // split-arguments. In this case, a white space.
    boost::split(res, example, boost::is_any_of(",, "));

    std::cout << "This string has " << res.size() << " elements." << std::endl;

    for (auto it = res.begin(); it != res.end(); ++it){
        std::cout << "Current element: " << *it << std::endl;
    }

    return 0;
}
