
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    vector <int> m;
    int aux, mod;
    bool cont;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> aux;
        cont = false;
        mod = aux % 42;
        for (int j = 0; j < m.size(); j++) {
            if (mod == m[j])
                cont = true;
        }
        if (!cont) {
            m.push_back(mod);
            sum++;
        }
    }
    cout << sum;
}
