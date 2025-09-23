
#include <iostream>
using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i%2 == 0) {
            cout << a << endl;
        }
    }
}
