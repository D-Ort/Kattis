
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double n = 0.00000;
    cin >> n;
    cout << fixed << setprecision(10) << (n * (0.09144 / 1.00000));
}
