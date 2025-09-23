
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int x;
    int a;
    int exp;
    long int sum = 0;

    cin >> x;
    for (int i = 0; i<x; i++){
        cin >> a;
        exp = a % 10;
        a /= 10;

        sum += pow(a,exp);
    }

    cout << sum;
}

