
#include <iostream>
using namespace std;

int main()
{
    long int n, m, sum1 = 0, sum2 = 0, aux;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        sum1 += aux;
    }
    for (int i = 0; i < m; i++) {
        cin >> aux;
        sum2 += aux;
    }
    if (sum1 > sum2) {
        cout << "Button 1" << endl;
    }
    else if (sum2 > sum1) {
        cout << "Button 2" << endl;
    }
    else {
        cout << "Oh no" << endl;
    }
}
