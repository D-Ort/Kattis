
#include <iostream>
using namespace std;

int main()
{
    int a, b, v, c;
    long int cant1 = 0, cant2 = 0;

    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> v >> c;
        cant1 += v * c;
    }
    for (int i = 0; i < b; i++) {
        cin >> v >> c;
        cant2 += v * c;
    }

    if (cant1 == cant2) {
        cout << "same" << endl;
    }
    else {
        cout << "different" << endl;
    }
}
