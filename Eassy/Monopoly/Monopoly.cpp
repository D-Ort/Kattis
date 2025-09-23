
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, d;
    double sum = 0.0;
    double p[12];
    p[0] = 0.0;
    p[1] = 1.0 / 36;
    p[2] = 2.0 / 36;
    p[3] = 3.0 / 36;
    p[4] = 4.0 / 36;
    p[5] = 5.0 / 36;
    p[6] = 6.0 / 36;
    p[7] = 5.0 / 36;
    p[8] = 4.0 / 36;
    p[9] = 3.0 / 36;
    p[10] = 2.0 / 36;
    p[11] = 1.0 / 36;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> d;
        sum += p[d - 1];
    }
    cout << sum;
}