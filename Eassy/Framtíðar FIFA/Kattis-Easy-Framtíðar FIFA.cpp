
#include <iostream>
using namespace std;

int main()
{
    long int a;
    int b, c = 2022;
    cin >> a >> b;
    while(a - b >= 0) {
        a -= b;
        c++;
    }
    cout << c;
}
