
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n < 2020) {
        cout << 1000 << endl;
    }
    else {
        n -= 2020;
        cout << 1000 + (100 * n) << endl;
    }
}
