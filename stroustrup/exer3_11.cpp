#include "std_lib_facilities.h"

int main()
{
    std::cout << "This program tells you how much change you have in total.\n";

    int pennies{0}, nickels{0}, dimes{0}, quarters{0},
        half_dollars{0}, dollars{0}, total{0};

    cout << "How many pennies do you have? ";
    cin >> pennies; total = pennies;
    cout << "How many nickels? ";
    cin >> nickels; total += 5*nickels;
    cout << "How many dimes? ";
    cin >> dimes; total += 10*dimes;
    cout << "How many quarters? ";
    cin >> quarters; total += 25*quarters;
    cout << "How many half dollars? ";
    cin >> half_dollars; total += 50*half_dollars;
    cout << "How many dollars? ";
    cin >> dollars; total += 100*dollars;

    cout << "\n\nThis means you have:\n"
        << pennies      << " pennies, "
        << nickels      << " nickels, "
        << dimes        << " dimes, "
        << quarters     << " quarters, "
        << half_dollars << " half dollars, and "
        << dollars      << " dollars.\n";

    cout << "This gives you a total of " << total
        << " cents, or $" << total/100 << "."
        << total%100 << " .\n";

    return 0;
}
