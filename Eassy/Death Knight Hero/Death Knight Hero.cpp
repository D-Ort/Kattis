
#include <iostream>
using namespace std;


int main()
{
    int n, b;
    cin >> n;
    b = n;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        for (int j = 0; j < a.length() - 1; j++) {
            if (a[j] == 'C' && a[j + 1] == 'D') {
                b--;
                j = a.length();
            }
        }
    }
    cout << b;
}
