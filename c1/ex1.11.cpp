#include <iostream>

int main()
{
    int sum = 0, v1 = 0, v2 = 0, v = 0;
    std::cout << "Please enter two integers: " << std::endl;
    std::cin >> v1 >> v2;

    if (v1 <= v2) {
        for (v = v1; v<= v2; ++v)
            sum += v;

        std::cout << "The sum from " << v1 << " until " << v2 
            << " is equal to " << sum << std::endl;
    }
    else {
        for (v = v2; v <= v1; ++v)
            sum += v;

        std::cout << "The sum from " << v2 << " until " << v1 
            << " is equal to " << sum << std::endl;
    }


    return 0;

}
