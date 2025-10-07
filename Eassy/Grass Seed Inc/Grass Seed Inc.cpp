
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c, n, w, l, sum=0;
    cin >> c >> n;
    for (int i = 0; i < n; i++) {
        cin >> w >> l;
        sum += (w * l) * c;
    }
    cout << fixed << setprecision(7) << sum << endl;
}
