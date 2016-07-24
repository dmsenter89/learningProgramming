#include "../std_lib_facilities.h"

/*
 * Converts yen, euros, and pounds into USD
 */


int main()
{
    constexpr double yen_to_usd = 1, eur_to_usd = 1, lbs_to_usd = 1;
    double fcurrency = 1;   // the amount of foreign currency we want to convert
    char unit=' ';   // the space character which is not a currency

    std::cout << "Please enter an amount and a currency (y for Yen, e for Euros,"
        << " and l for British Pounds):\n";
    std::cin >> fcurrency >> unit;

    if (unit=='y')
        std::cout << fcurrency << "Yen == " << yen_to_usd*fcurrency << "USD.\n";
    else if (unit=='e')
        std::cout << fcurrency << "EUR == " << eur_to_usd*fcurrency << "USD.\n";
    else if (unit=='l')
        std::cout << fcurrency << "GBP == " << lbs_to_usd*fcurrency << "USD.\n";
    else
        std::cout << "Sorry, I don't know the currency " << unit << ".\n";

    return 0;
}
