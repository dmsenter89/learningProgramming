#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) {
  int val1,val2;
  cout << "Please enter two integer values.\n";
  cin >> val1 >> val2;

  // the smaller, larger, sum, difference, product, and ratio of these values
  int smaller = (val1<val2) ? val1 : val2;
  int larger = (val1>val2) ? val1 : val2;
  int sum = val1+val2;
  int diff=val1-val2;
  int prod = val1*val2;
  int ratio = val1/val2;
  /* NOTE:
    This division, even if it were currently defined as 'double ratio = ...'
    would only produce an int. A later chapter provides informaiton on how to
    force one of the variable to be treated as a double so that the ratio can
    be calculated correctly.
  */

  cout << "-----------------------------------------------------------\n";
  cout << "The number " << val1 << " is less than " << val2 << ".\n";
  cout << "The four basic arithmetic operations on your numbers:\n"
    << val1 << " + " << val2 << " = " << sum << '\n'
    << val1 << " - " << val2 << " = " << diff << '\n'
    << val1  << " * " << val2 << " = " << prod << '\n'
    << val1 << " / " << val2 << " = " << ratio << '\n';
  cout << "\nThank you for playing.\n"
       << "-----------------------------------------------------------\n";
  return 0;

}
