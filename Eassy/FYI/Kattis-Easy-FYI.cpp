// recibe un número de siete cifras y detecta si las cuatro primeras son 555 en cuyo caso devuelve 1 si no, devuelve 0

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n /= 10000;
    if (n == 555)
        cout << 1;
    else
        cout << 0;
    return 0;
}
