
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double v, a, t;

    cin >> v >> a >> t;

    cout << (v * t) + (0.5 * a * pow(t,2)) << endl;
}