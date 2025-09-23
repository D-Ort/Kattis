
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    double sum = 0.0, aux = 0.0;
    
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> aux;
        sum += aux;
    }
    aux = sum;
    for (int i = 0; i < n - k; i++) {
        aux -= 3.0;
        sum += 3.0;
    }
    aux /= n;
    sum /= n;

    cout << aux << ' ' << sum;

}
