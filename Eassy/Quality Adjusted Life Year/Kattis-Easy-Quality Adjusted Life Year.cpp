
#include <iostream>
using namespace std;

int main()
{
    int n;
    double q, y, tot = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q >> y;
        tot += (q * y);
    }
    cout << tot;
}
