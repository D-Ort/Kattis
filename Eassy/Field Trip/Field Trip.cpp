
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long int N, aux, sum = 0, a = -1, b = -1;
    vector <long int> c;
    bool si = false, afirm = false;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> aux;
        c.push_back(aux);
        sum += aux;
    }
    aux = 0;

    if (sum % 3 == 0) {
        sum /= 3;
        for (int i = 0; i < N; i++) {
            aux += c[i];
            if (aux == sum) {
                a = i + 1;
            }
            else if (a != -1 && aux == 2 * sum) {
                afirm = true;
                b = i + 1;
                i = N;
            }
        }
    }
    cout << a;
    if (a != -1 && b != -1) {
        cout << ' ' << b;
    }

}
