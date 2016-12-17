#include "../std_lib_facilities.h"

int main()
{
    int i=0;
    
    while(i<26){
        std::cout << char('a'+i) << "\t" << 97+i << std::endl;
        ++i;
    }

    return 0;
}
