// Recibe n números que suma y resta 1 por cada operación

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    sum -= n - 1;
    cout << sum << endl;
}
