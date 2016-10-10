#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{

    vector<unsigned> scores(11, 0);
    unsigned grade;

    while (cin >> grade){
        if (grade <= 100)
            ++scores[grade/10];
    }

    cout << "The totals in the grade clusters are:" << endl;
    for (auto i : scores)
        cout << i << " ";

    cout << endl;

    return 0;
}
