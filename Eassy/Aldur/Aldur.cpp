
#include <iostream>
using namespace std;

int main()
{
    long int n, a = 1000000, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b < a) {
            a = b;
        }
    }

    cout << a << endl;
}