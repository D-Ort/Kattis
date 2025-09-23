
#include <iostream>
using namespace std;

int main()
{
    int t, n, sol;
    cin >> t;
    for (int i = 0; i < t;i++) {
        cin >> n;
        sol = n;
        for (int j = 1; j < n;j++) {
            sol *= (n - j);
        }
        cout << sol % 10 << endl;
    }
}
