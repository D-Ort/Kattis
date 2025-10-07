
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, aux;
    map <int, bool> aprendidos;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        aprendidos.insert({ aux, false });
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> aux;
        aprendidos[aux] = true;
    }

    for (auto& nudo : aprendidos) {
        if (!nudo.second) {
            cout << nudo.first << endl;
        }
    }
}
