
#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (int(n[i]) >= 65 && int(n[i]) <= 90) {
            cout << n[i];
        }
    }
}
