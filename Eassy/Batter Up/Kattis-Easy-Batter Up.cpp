
#include <iostream>
using namespace std;

int main()
{
    int n, a;
    double num = 0.0, d = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a != -1) {
            num += a;
            d++;
        }
    }
    cout << num / d;
}
