
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string aux;

    cin >> a >> aux >> b;
    if (a > b) {
        cout << ">" << endl;
    }
    else if (a < b) {
        cout << "<" << endl;
    }
    else {
        cout << "Goggi svangur!" << endl;
    }
}
