
#include <iostream>
using namespace std;

int main()
{
    long int w, n, wi, li, l = 0;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> wi >> li;
        l += (wi * li);
    }
    l /= w;
    cout << l;
}
