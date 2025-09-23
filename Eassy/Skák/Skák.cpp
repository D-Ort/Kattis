
#include <iostream>
using namespace std;

int main()
{
    long int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || y1 == y2) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
    }
}