
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
    long long int n, sum = 0, m1 = 0, m2 = 0, a;
    cin >> n;

    for (int i = 0; i < n;i++) {
        cin >> a;
        if (m1 < a) {
            m1 = a;
        }
        sum += a;
    }
    if (m1 * 2 > sum) {
        sum = m1 * 2;
    }
    cout << sum << endl;
}
