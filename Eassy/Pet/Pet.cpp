
#include <iostream>
using namespace std;

int main() {
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, aux;
    for (int i = 0;i < 4;i++) {
        cin >> aux;
        c1 += aux;
    }
    for (int i = 0;i < 4;i++) {
        cin >> aux;
        c2 += aux;
    }
    for (int i = 0;i < 4;i++) {
        cin >> aux;
        c3 += aux;
    }
    for (int i = 0;i < 4;i++) {
        cin >> aux;
        c4 += aux;
    }
    for (int i = 0;i < 4;i++) {
        cin >> aux;
        c5 += aux;
    }
    if (c1 < c5) {
        if (c2 < c5) {
            if (c3 < c5) {
                if (c4 < c5) {
                    cout << 5 << ' ' << c5;
                }
            }
        }
    }
    if (c1 < c4) {
        if (c2 < c4) {
            if (c3 < c4) {
                if (c5 < c4) {
                    cout << 4 << ' ' << c4;
                }
            }
        }
    }
    if (c1 < c3) {
        if (c2 < c3) {
            if (c4 < c3) {
                if (c5 < c3) {
                    cout << 3 << ' ' << c3;
                }
            }
        }
    }
    if (c1 < c2) {
        if (c3 < c2) {
            if (c4 < c2) {
                if (c5 < c2) {
                    cout << 2 << ' ' << c2;
                }
            }
        }
    }
    if (c5 < c1) {
        if (c2 < c1) {
            if (c3 < c1) {
                if (c4 < c1) {
                    cout << 1 << ' ' << c1;
                }
            }
        }
    }
}