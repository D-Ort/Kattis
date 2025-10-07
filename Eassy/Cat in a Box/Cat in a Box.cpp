
#include <iostream>
using namespace std;

int main()
{
    int h, w, l;
    long int box, v;
    cin >> h >> w >> l >> v;
    box = h * w * l;

    if (box == v) {
        cout << "COZY" << endl;
    }
    else if (box > v) {
        cout << "SO MUCH SPACE" << endl;
    }
    else {
        cout << "TOO TIGHT" << endl;
    }
}
