
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double n;
    cin >> n;
    n -= 0.3;
    cout << fixed << setprecision(4) << n << endl;
}
