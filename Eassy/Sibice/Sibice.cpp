
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, w, h, max, aux;

    cin >> n >> w >> h;
    max = sqrt((w * w) + (h * h));

    for (int i = 0; i < n; i++) {
        cin >> aux;
        if (aux > max) {
            cout << "NE" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }
}
