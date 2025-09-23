// Recibe 3 números y devuelve de uno al tercer número sustitullendo aquellos que sean divisibles por el primero y segundo por Fizz y Buzz respectivamente

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    bool x;
    cin >> a >> b >> c;
    for (int i = 1; i <= c; i++) {
        x = false;
        if (i % a == 0) {
            cout << "Fizz";
            x = true;
        }
        if (i % b == 0) {
            cout << "Buzz";
        }
        else if (!x) 
            cout << i;   
        cout << endl;
    }
}
