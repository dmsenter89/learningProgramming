#include "../std_lib_facilities.h"

/*
 * Program that reads words in. At the end, it sorts them
 * and prints them in lexicographic order. If a word is 
 * "disliked", it will be bleeped out instead of printed.
 */

int main()
{
    vector<string> words;
    vector<string> disliked {"Broccoli","broccoli"};
    // read in words
    for(string temp; cin>>temp;)
        words.push_back(temp);

    cout << "\nNumber of words: " << words.size() << '\n';

    sort(words);

    // this bool will be used to figure out if a term in the
    // string needs to be bleeped out.
    bool ugly = false;

    for (unsigned i=0; i<words.size(); ++i){
        if(i==0 || words[i-1]!=words[i]){
            for (string x : disliked){
                if (x==words[i]){
                    // a word needs to be bleeped
                    ugly = true;
                }
            } 
            if (ugly == true){
                std::cout << "BLEEP\n";
                ugly = false;
            } else {
                std::cout << words[i] << std::endl;
            }
        }
    }

    return 0;
}
