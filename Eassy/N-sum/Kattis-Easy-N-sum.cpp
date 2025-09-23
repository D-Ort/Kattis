
#include <iostream>
using namespace std;

int main()
{
    int n, s, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        r += s;
    }
    cout << r;
}
