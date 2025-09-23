
#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, aux;
    string name1, name2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name2 >> aux;

        if (aux > max) {
            max = aux;
            name1 = name2;
        }
    }

    cout << name1 << endl;
}
