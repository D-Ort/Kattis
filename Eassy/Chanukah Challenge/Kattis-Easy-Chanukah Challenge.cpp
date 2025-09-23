
#include <iostream>
using namespace std;

int main()
{
    long int p, k, n, x;
    cin >> p;
    for (int i = 1; i <= p; i++) {
        cin >> k >> n;
        x = 0;
        for (int j = 1; j <= n; j++) {
            x += j;
        }
        x += n;
        cout << k << ' ' << x;
        if (i != p) {
            cout << endl;
        }
    }
}
