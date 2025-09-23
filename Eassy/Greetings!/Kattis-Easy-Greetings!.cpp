// recibe un string de forma he...ey y devuelve otro con el doble de 'e's

#include <iostream>
using namespace std;

int main()
{
    string a;
    int x;
    cin >> a;
    x = (a.length() - 2) * 2;
    cout << 'h';
    for (int i = 0;i < x;i++) {
        cout << 'e';
    }
    cout << 'y' << endl;
}
