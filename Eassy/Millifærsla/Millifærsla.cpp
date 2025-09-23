
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    string nom;

    cin >> a >> b >> c;
    if (a < b && a < c) {
        nom = "Monnei";
    }
    else if (b < a && b < c) {
        nom = "Fjee";
    }
    else if (c < a && c < b) {
        nom = "Dolladollabilljoll";
    }

    cout << nom << endl;
}
