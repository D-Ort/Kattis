
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, aux;
    cin >> a >> b >> c;

    aux = pow(b, 2) - (4 * a * c);

    if (aux > 0) {
        cout << 2 << endl;
    }
    else if (aux == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}
