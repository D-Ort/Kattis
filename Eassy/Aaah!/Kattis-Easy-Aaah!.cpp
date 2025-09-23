//Devuelve "go" si hay menos 'a' en la segunda entrada que en la primera, si no devuelve "no".

#include <iostream>
using namespace std;

int main()
{
    char a;
    int contador1 = 0, contador2 = 0;
    while (cin >> a, a == 'a') {
        contador1++;
    }
    while (cin >> a, a == 'a') {
        contador2++;
    }
    if (contador1 < contador2) {
        cout << "no";
    }
    else
        cout << "go";
}
