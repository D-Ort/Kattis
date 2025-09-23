
#include <iostream>
using namespace std;

int main()
{
    long int a, b, c, sum = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        sum += c;
    }
    if (sum <= b) {
        cout << "Jebb";
    }
    else {
        cout << "Neibb";
    }
}