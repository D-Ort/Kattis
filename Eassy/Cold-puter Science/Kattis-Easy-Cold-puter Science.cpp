
#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    long int t;
    cin >> n;
    for (int i = 0; i < n;i++) {
        cin >> t;
        if (t < 0) {
            s++;
        }
    }
    cout << s;
}
