
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int b = 0, k = 0;
    cin >> word;

    b = count(word.begin(), word.end(), 'b');
    k = count(word.begin(), word.end(), 'k');

    if (b > k) {
        cout << "boba" << endl;
    }
    else if (k > b) {
        cout << "kiki" << endl;
    }
    else if (b > 0) {
        cout << "boki" << endl;
    }
    else {
        cout << "none" << endl;
    }
}
