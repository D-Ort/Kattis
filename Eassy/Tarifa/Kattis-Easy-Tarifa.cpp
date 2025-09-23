
#include <iostream>
using namespace std;

int main()
{
    int x, n;
    long int p, y = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++) {

        y += x;
        cin >> p;
        y -= p;
    }

    y += x;

    cout << y;
}
