
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double empty = 0, m, n;
    string s;

    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '.')
                empty++;
        }
    }

    cout << fixed << setprecision(5) << empty / (m * n) << endl;
}