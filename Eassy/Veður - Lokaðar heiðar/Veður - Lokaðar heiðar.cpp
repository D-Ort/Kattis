
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int v, n, max;
    string nom;
    cin >> v >> n;

    for (int i = 0; i < n; i++) {
        cin >> nom >> max;

        cout << nom;

        if (max < v) {
            cout << " lokud";
        }
        else {
            cout << " opin";
        }

        cout << endl;
    }
}