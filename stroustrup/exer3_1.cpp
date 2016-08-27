#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) {
  // convert from miles to kilometers
  double miles{0};

  cout << "Please enter the number of miles:  ";
  cin >> miles;
  cout << "That corresponds to " << 1.609*miles << " km.\n";
  return 0;
}
