
#include <iostream>
using namespace std;

int main()
{
    long int n, aux, sol = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        sol += aux;
    }
    cout << sol << endl;
}
