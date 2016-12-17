// cpp primer 5, p. 110

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> text = {"This is the first sentence.", "This is the second sentence.",
        "The next sentence will be empty", "", "This shouldn't show up..."};
    
    cout << "Let's check the size of our string: " << text.size() << endl;
    cout << "Hope this printed 5, since we have 5 sentences. Here's the content:\n";

    for (auto it = text.begin();
            it != text.end() && !it->empty(); ++it){
        for (auto c = it->begin(); c != it->end(); ++c)
            *c = toupper(*c);
        cout << *it << endl;
    }

    return 0;
}
