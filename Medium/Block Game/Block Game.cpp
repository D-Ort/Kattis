
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n, m, aux1, aux2;
    int contador = 0;
    cin >> m >> aux1;
    if (aux1 > m) {
        n = aux1;
        aux1 = m;
        m = n;
    }

    do {
        n = m;
        m = aux1;
        aux1 = n % m;
        aux2 = n / m;
        contador++;
    } while (aux2 == 1 && aux1 != 0);

    if (contador % 2 == 1) {
        cout << "win" << endl;
    }
    else {
        cout << "lose" << endl;
    }
    return 0;
}
