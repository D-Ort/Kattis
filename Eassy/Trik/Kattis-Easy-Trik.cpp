
#include <iostream>
using namespace std;

int main()
{
    int n, x = 1;
    string m;
    cin >> m;
    n = m.length();
    for (int i = 0; i < n; i++) {
        if (x == 1) {
            if (m[i] == 'A') {
                x = 2;
            }else if (m[i] == 'C') {
                x = 3;
            }
        }
        else if (x == 2) {
            if (m[i] == 'A') {
                x = 1;
            }
            else if (m[i] == 'B') {
                x = 3;
            }
        }
        else if (x == 3) {
            if (m[i] == 'B') {
                x = 2;
            }
            else if (m[i] == 'C') {
                x = 1;
            }
        }
    }
    cout << x;
}