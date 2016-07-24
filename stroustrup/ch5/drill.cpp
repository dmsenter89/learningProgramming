#include "../std_lib_facilities.h"

int main()
{
    try {
        // begin of drill code

        string s = "fool"; if (s=="fool") cout << "Success!\n";

        // end of drill code
        return 0;
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    } catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}
