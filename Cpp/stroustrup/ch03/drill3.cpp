#include "std_lib_facilities.h"
// writes a form letter

int main()
{
    std::string first_name{"???"}, friend_name{"???"};
    char friend_sex{'n'};
    int age{0};
    std::cout << "Please enter the first name of the addressee: ";
    std::cin >> first_name;
    std::cout << "Enter the name of a second friend: ";
    std::cin >> friend_name;
    std::cout << "What is the sex of this friend? (m/f) ";
    std::cin >> friend_sex;
    std::cout << "What is the age of the recipient? ";
    std::cin >> age;
    if (age <= 0 || age >= 110){
        simple_error("you're kidding!");
    }


    // letter output
    std::cout << "----------BEGIN OF LETTER----------\n";
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "\tHow are you? I am fine. I miss you. Today "
        << "has been a very rainy day. It's pretty lame. What"
        << " are you up to? Anything interesting?\n";
    std::cout << "\tBtw, have you seen " << friend_name << " lately?";

    if (friend_sex == 'm'){
        std::cout << " If you see " << friend_name
            << ", please ask him to call me.\n";
    }

    if (friend_sex == 'f'){
        std::cout << "If you see " << friend_name
            << ", please ask her to call me.\n";
    }

    std::cout << "I hear you just had a birthday and you are now "
        << age << " years old. ";

    if (age <= 12){
        std::cout << "Next year you'll be " << age+1
           << " years old! ";
    }

   if (age == 17){
       std::cout << "New year you'll be able to vote! ";
   }

   if (age >= 70){
       std::cout << "I hope you are enjoying retirement.";
   }

   std::cout << "\nYours Sincerely,\n\n\n"
       << "D. M. Senter";

    std::cout << std::endl;


    return 0;
}
