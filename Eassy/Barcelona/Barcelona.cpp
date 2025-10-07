
#include <iostream>
using namespace std;

int main()
{
    long int n, k, a, pos = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == k) {
            pos = i;
        }
    }
    if (pos == 0) {
        cout << "fyrst" << endl;
    }
    else if (pos == 1) {
        cout << "naestfyrst" << endl;
    }
    else {
        cout << pos + 1 << " fyrst" << endl;
    }
}
