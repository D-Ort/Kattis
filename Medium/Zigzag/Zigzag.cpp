
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long int n, aux1, aux2, auxn = 1, sum = 1;
    bool mM;

    cin >> n;

    if (n > 1) {

        cin >> aux1;

        do {
            cin >> aux2;

            if (aux1 < aux2) {
                sum++;
                mM = true;
            }
            else if (aux1 > aux2) {
                sum++;
                mM = false;
            }

            auxn++;

        } while (aux1 == aux2 && auxn < n);

        for (int i = auxn; i < n; i++) {

            aux1 = aux2;
            cin >> aux2;

            if (mM) {
                if (aux2 < aux1) {
                    sum++;
                    mM = false;
                }
            }
            else {
                if (aux2 > aux1) {
                    sum++;
                    mM = true;
                }
            }
        }

    }
    cout << sum << endl;
}
