
#include <iostream>
using namespace std;

int main()
{
    string loDicho;
    cin >> loDicho;
    int x;
    bool si = false;

    x = loDicho.length();
    if (x <= 30 && x >= 1) {
        for (int i = 0; i < x - 1 && !si; i++) {
            if (loDicho[i] == 's') {
                if (loDicho[i + 1] == 's') {
                    si = true;
                }
                i++;
            }
        }
        if (si) {
            cout << "hiss" << endl;
        }
        else {
            cout << "no hiss" << endl;
        }
    }
}