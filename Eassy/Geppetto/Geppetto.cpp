
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n, m, a, b, aux;
    cin >> n >> m;
    vector <int> forbidden(n);
    bool comp;

    for (int i = 0; i < n; i++) {
        forbidden[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        a--;
        b--;
        forbidden[a] |= (1 << b);
        forbidden[b] |= (1 << a);
    }

    aux = 0;

    for (int pizza = 0; pizza < (1 << n); pizza++) {
        comp = true;
        for (int i = 0; i < n - 1; i++) {
            if (pizza & (1 << i) && pizza & forbidden[i])
                comp = false;
        }
        if (comp) {
            aux++;
        }
    }

    cout << aux;
}
